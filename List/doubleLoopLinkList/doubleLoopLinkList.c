#include <stdio.h>
#include <stdlib.h>

#include "doubleLoopLinkList.h"

NODEP initList()
{
    NODEP list = (NODEP)malloc(sizeof(NODE));
    list->data = 0;
    list->next = list;
    list->pre = list;
    return list;
}

void headInsert(NODEP list, int data)
{
    NODEP node = (NODEP)malloc(sizeof(NODE));
    node->data = data;
    node->next = list->next;
    node->pre = list;
    if (list->data == 0)
    {
        list->pre = node;
    }
    else
    {
        list->next->pre = node;
    }
    list->next = node;
    list->data++;
}

void tailInsert(NODEP list, int data)
{
    NODEP node = (NODEP)malloc(sizeof(NODE));
    NODEP tail = list->pre;
    node->data = data;
    tail->next = node;
    node->pre = tail;
    node->next = list;
    list->pre = node;
    list->data++;
}

int deleteNode(NODEP list, int data)
{
    NODEP current = list->next;
    while (current != list)
    {
        if (current->data == data)
        {
            current->pre->next = current->next;
            current->next->pre = current->pre;
            free(current);
            list->data--;
            return TRUE;
        }

        current = current->next;
    }
    return FALSE;
}

void printList(NODEP list)
{
    NODEP current = list->next;
    while (current != list)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}