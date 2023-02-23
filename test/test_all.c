#include <check.h>
#include "../src/dsa_ll.h"
#include "../src/dsa_dll.h"
#include "test_ll.c"
#include "test_dll.c"
#include "test_queue.c"
#include "test_stack.c"
#include "test_pqueue.c"
#include "test_bst.c"
#include "test_ht.c"
#include "test_cll.c"
#include "test_wgraph.c"

extern Suite *dsa_ll_st(void);
extern Suite *dsa_dll_st(void);
extern Suite *dsa_queue_st(void);
extern Suite *dsa_stack_st(void);
extern Suite *dsa_pqueue_st(void);
extern Suite *dsa_bst_st(void);
extern Suite *dsa_ht_st(void);
extern Suite *dsa_cll_st(void);
extern Suite *dsa_wgraph_st(void);

int main(void)
{
	SRunner *sr = srunner_create(NULL);
	srunner_set_fork_status(sr, CK_NOFORK); /* Disabled to discard Check's valgrind errors */

	srunner_add_suite(sr, dsa_ll_st());
	srunner_add_suite(sr, dsa_dll_st());
	srunner_add_suite(sr, dsa_queue_st());
	srunner_add_suite(sr, dsa_stack_st());
	srunner_add_suite(sr, dsa_pqueue_st());
	srunner_add_suite(sr, dsa_bst_st());
	srunner_add_suite(sr, dsa_ht_st());
	srunner_add_suite(sr, dsa_cll_st());
	srunner_add_suite(sr, dsa_wgraph_st());

	srunner_run_all(sr, CK_NORMAL);
	int failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return !!failed;
}
