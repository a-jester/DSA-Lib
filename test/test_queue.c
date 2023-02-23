#include <stdlib.h>
#include <check.h>
#include "dsa_queue.h"
#include "test_utils.h"

/* test queue creation */
START_TEST(test_queue_create)
	{
		queue_t *q = NULL;
		q = queue_create();
		ck_assert_ptr_ne(q, NULL);
		free(q);
	}
END_TEST

/* test queue destruction */
START_TEST(test_queue_destroy)
	{
		queue_t *q = NULL;
		q = queue_create();
		ck_assert_ptr_ne(q, NULL);
		queue_destroy(&q);
		ck_assert_ptr_eq(q, NULL);
	}
END_TEST

/* test enqueue */
START_TEST(test_enqueue)
	{
		queue_t *q = NULL;
		int rc;
		q = queue_create();
		ck_assert_ptr_ne(q, NULL);
		enqueue(q, (void *)1);
		rc = enqueue(q, (void *)2);
		ck_assert_int_eq(rc, 0);
		ck_assert_ptr_eq(q->tail->data, (void *)2);
		queue_destroy(&q);
	}
END_TEST

/* test dequeue */
START_TEST(test_dequeue)
	{
		queue_t *q = NULL;
		queue_node_t *temp = NULL;
		q = queue_create();
		ck_assert_ptr_ne(q, NULL);
		enqueue(q, (void *)1);
		enqueue(q, (void *)2);
		enqueue(q, (void *)3);
		temp = dequeue(q);
		ck_assert_ptr_eq(temp->data, (void *)1);
		queue_destroy(&q);
		free(temp);
	}
END_TEST

/* test queue searching */
START_TEST(test_queue_search)
	{
		queue_t *q = NULL;
		queue_node_t *temp = NULL;
		q = queue_create();
		ck_assert_ptr_ne(q, NULL);
		enqueue(q, (void *)1);
		enqueue(q, (void *)2);
		enqueue(q, (void *)3);
		ck_assert_int_eq(q->nodes, 3);
		temp = queue_search(q, (void *)2, compare_int_desc);
		ck_assert_ptr_ne(temp, NULL);
		ck_assert_ptr_eq(temp->data, (void *)2);
		queue_destroy(&q);
	}
END_TEST

/* test queue index searching */
START_TEST(test_queue_find_at_index)
	{
		queue_t *q = NULL;
		queue_node_t *temp = NULL;
		q = queue_create();
		ck_assert_ptr_ne(q, NULL);
		enqueue(q, (void *)1);
		enqueue(q, (void *)2);
		enqueue(q, (void *)3);
		ck_assert_int_eq(q->nodes, 3);
		temp = queue_find_at_index(q, 1);
		ck_assert_ptr_ne(temp, NULL);
		ck_assert_ptr_eq(temp->data, (void *)2);
		queue_destroy(&q);
	}
END_TEST

static TFun queue_tests[] = {
	test_queue_create,
	test_queue_destroy,
	test_enqueue,
	test_dequeue,
	test_queue_search,
	test_queue_find_at_index,
	NULL
};

Suite *dsa_queue_st(void)
{
	Suite *s = suite_create("DsaQUEUE");

	TCase *tc = tcase_create("QUEUE Core");
	TFun *curr = queue_tests;
	while (*curr) {
		tcase_add_test(tc, *curr++);
	}
	suite_add_tcase(s, tc);
	return s;
}
