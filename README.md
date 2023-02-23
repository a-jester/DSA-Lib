# DSA Lib

## Purpose
To create a shared object with a well documented API that is capable of performing common data structure-related 
operations.

## Learning Objectives
* Demonstrate an understanding of the implementation and common operation of the following data structures:
    * Linked list
    * Doubly linked list
    * Circularly linked list
    * Queue
    * Tree
    * Binary search tree (BST)
    * Hash table
    * Stack
    * Weighted graph
    * Priority queue
* Demonstrate an understanding of the following common algorithm types:
    * Hash
    * Sort

## Requirements 
* Design plan
* User guide
* MAKEFILE
    * `all`
    * `test`
    * `lib`
    * `clean`
* Data structures must accept any data type

## Data Structures
|Data Structure||
| --- | --- |
Function | Purpose
___
|Linked List||
| --- | --- |
create | Create a new linked list
destroy | Destroys a linked list
insert | Inserts data into a linked list
delete | Deletes data from a linked list
search | Searches a linked list for data
sort | Sort a linked list using a function pointer
___
|Doubly Linked List||
| --- | --- |
create | Create a new doubly linked list
destroy | Destroys a doubly linked list
insert | Inserts data into a doubly linked list
delete | Deletes data from a doubly linked list
search | Searches a doubly linked list for data
sort | Sort a doubly linked list using a function pointer
___
|Circularly Linked List||
| --- | --- |
create | Create a new circularly linked list
destroy | Destroys a circularly linked list
insert | Inserts data into a circularly linked list
delete | Deletes data from a circularly linked list
search | Searches a circularly linked list for data
sort | Sort a circularly linked list using a function pointer
___
|Queue||
| --- | --- |
create | Create a new queue
destroy | Destroys a queue
enqueue | Add data to a queue
dequeue | Remove data from a queue
search | Searches a queue for given data
index | Navigate to a given index in a queue
___
|Tree||
| --- | --- |
create | Creates a new tree
destroy | Destroys a tree
insert | Inserts data into the tree
delete | Removes data from the tree
search | Searches the tree for given data
___
|Binary Search Tree||
| --- | --- |
create | Creates a new tree
destroy | Destroys a tree
insert | Inserts data into the tree
delete | Removes data from the tree
search | Searches the tree for given data
___
|Hash Table||
| --- | --- |
create | Creates a new hash table
destroy | Destroys a hash table
insert | Inserts data into a hash table
delete | Removes data from a hash table
search | Searches a hash table for given data
index | Navigate to a given index in a hash table
sort | Sorts an array in place
___
|Stack||
| --- | --- |
create | Create a new stack with a limited number of items
destroy | Destroys a stack
push | Inserts data to the top of the stack
pop | Removes data from the top of the stack
index | Navigate to a given index in a hash table
___
|Weighted Graph||
| --- | --- |
create | Create a new graph
destroy | Destroy a graph
insertNode | Adds a new node
removeNode | Removes a node from the graph and all associated edges
findNode | Searches graph for a given node
insertEdge | Adds an edge between two nodes
removeEdge | Removes an edge between two nodes
calculateWeight | Calculate the minimum weight between two nodes
___
|Priority Queue||
| --- | --- |
create | Create a new queue
destroy | Destroys a queue
enqueue | Add data to a queue with a priority
dequeue | Remove data from a queue with highest priority
search | Searches a queue for given data
index | Navigate to a given index in a queue
___

## Timeline
Below is a recommended schedule for the project. It is expected to take approximately three weeks.

During this project you should expect to have a progress/code review with your mentor weekly. This will ensure that you are making progress. Please discuss issues, especially if you get stuck, with your mentor.

### Initial (Week 1)
* Define requirements
* Generate design document
* Create basic `makefile`
* Build shared object with stub functions
* Generate test cases

### Implementation (Week 2)
* Queue
* Stack
* Linked list
* Doubly linked list
* Circularly linked list
* Binary search tree
* Weighted graph

### Finalizing (Week 3)
* Hash table
* Code review
