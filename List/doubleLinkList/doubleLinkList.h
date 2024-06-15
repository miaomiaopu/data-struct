#ifndef DOUBLE_LINK_LIST_H__
#define DOUBLE_LINK_LIST_H__

#define TRUE 0
#define FALSE 1

typedef struct Node
{
    struct Node *pre;
    struct Node *next;
    int data;
} NODE, *NODEP;

NODEP initList();

void headInsert(NODEP list, int data);

void tailInsert(NODEP list, int data);

int deleteNode(NODEP list, int data);

void printList(NODEP list);

#endif // DOUBLE_LINK_LIST_H__