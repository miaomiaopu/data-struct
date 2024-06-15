#ifndef LOOP_LINK_LIST_H__
#define LOOP_LINK_LIST_H__

#define TRUE 0
#define FALSE 1

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *NODEP;

NODEP initList();

void headInsert(NODEP list, int data);

void tailInsert(NODEP list, int data);

int deleteNode(NODEP list, int data);

void printList(NODEP list);

#endif // LOOP_LINK_LIST_H__