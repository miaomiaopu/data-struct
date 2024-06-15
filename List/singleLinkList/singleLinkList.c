#include <stdio.h>
#include <stdlib.h>

#include "singleLinkList.h"

NODEP initList()
{
    NODEP list = (NODEP)malloc(sizeof(NODE));
    list->data = 0;
    list->next = NULL;
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
    NODEP head = list;
    NODEP node = (NODEP)malloc(sizeof(NODE));
    node->data = data;
    node->next = NULL;
    list = list->next;
    while (list->next != NULL)
    {
        list = list->next;
    }
    list->next = node;
    head->data++;
}

void deleteNode(NODEP list, int data)
{
    NODEP pre = list;
    NODEP current = list->next;
    while (current != NULL)
    {
        if (current->data == data)
        {
            pre->next = current->next;
            list->data--;
            free(current);
            break;
        }
        pre = current;
        current = current->next;
    }
}

void printList(NODEP list)
{
    list = list->next;
    while (list != NULL)
    {
        printf("%d ", list->data);
        list = list->next;
    }
    printf("\n");
}
