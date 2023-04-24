# Nodes in linked list

## Introduction:

This is a C program to implement a singly linked list data structure with basic operations like adding a node at the end, adding a node at the beginning and displaying the elements of the list. The program uses dynamic memory allocation to create nodes of the linked list.

## Algorithm:

1. Create a structure named "node" that has two members, an integer "data" and a pointer to the next node "next".
2. Create a pointer variable named "start" that points to the first node of the list.
3. Implement three functions to add a node at the end, add a node at the beginning and display the elements of the list.
4. In the "addatend" function, allocate memory for a new node, assign the data to it, and traverse the list to find the last node. Set the "next" pointer of the last node to the newly created node.
5. In the "addatstart" function, allocate memory for a new node, assign the data to it, and set its "next" pointer to the current start node. Set the "start" pointer to the newly created node.
6. In the "display" function, traverse the list and print the data and next address of each node.
7. In the main function, create a new node and assign it to the "start" pointer. Then add nodes at the end and beginning of the list and display the final list.

## Example:

Suppose we want to create a singly linked list with the following elements: 7, 3, 9, 5, 1. The program will perform the following operations:

1. A new node is created with data 7 and assigned to the "start" pointer.
2. The "addatend" function is called with data 3. A new node is created, and its "next" pointer is set to NULL. The "next" pointer of the current last node (7) is set to the newly created node.
3. The "addatend" function is called with data 9. A new node is created, and its "next" pointer is set to NULL. The "next" pointer of the current last node (3) is set to the newly created node.
4. The "addatend" function is called with data 5. A new node is created, and its "next" pointer is set to NULL. The "next" pointer of the current last node (9) is set to the newly created node.
5. The "addatend" function is called with data 1. A new node is created, and its "next" pointer is set to NULL. The "next" pointer of the current last node (5) is set to the newly created node.
6. The "addatstart" function is called with data 11. A new node is created, its "next" pointer is set to the current start node (7), and the "start" pointer is set to the newly created node.
7. The "display" function is called to print the final list: 11 -> 7 -> 3 -> 9 -> 5 -> 1.

## Uses:

Singly linked lists are used to implement various data structures like stacks, queues, and hash tables. They are also used in operating systems and compilers for maintaining data structures like symbol tables, syntax trees, and memory management.

## Output:
![image](https://user-images.githubusercontent.com/125560933/234076334-010f002e-b08c-4e4d-b0dd-34558bfedab4.png)


## Applications:

1. Stacks and queues: A singly linked list can be used to implement both stacks and queues.
2. Hash tables: A singly linked list is used to implement a hash table, where each element of the table is a linked list.
3. Symbol tables: A singly linked list is used to implement a symbol table, where
