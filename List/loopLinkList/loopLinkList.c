#include <stdio.h>
#include <stdlib.h>

#include "loopLinkList.h"

NODEP initList()
{
    NODEP list = (NODEP)malloc(sizeof(NODE));
    list->data = 0;
    list->next = list;
    return list;
}

void headInsert(NODEP list, int data)
{
    NODEP node = (NODEP)malloc(sizeof(NODE));
    node->data = data;
    node->next = list->next;
    list->next = node;
    list->data++;
}

void tailInsert(NODEP list, int data)
{
    NODEP node = (NODEP)malloc(sizeof(NODE));
    node->data = data;
    node->next = list;
    NODEP tail = list;
    while (tail->next != list)
    {
        tail = tail->next;
    }
    tail->next = node;
    list->data++;
}

int deleteNode(NODEP list, int data)
{
    NODEP node = list->next;
    NODEP pre = list;
    while (node != list)
    {
        if (node->data == data)
        {
            pre->next = node->next;
            list->data--;
            free(node);
            return TRUE;
        }
        pre = node;
        node = node->next;
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