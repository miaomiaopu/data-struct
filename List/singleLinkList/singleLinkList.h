#ifndef SINGLE_LINK_LIST_H__
#define SINGLE_LINK_LIST_H__

typedef struct ListNode
{
    int data;
    struct ListNode *next;
} NODE, *NODEP;

NODEP initList();

void headInsert(NODEP list, int data);

void tailInsert(NODEP list, int data);

void deleteNode(NODEP list, int data);

void printList(NODEP list);

#endif // SINGLE_LINK_LIST_H__