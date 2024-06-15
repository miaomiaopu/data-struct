#include <stdio.h>
#include <stdlib.h>

#include "doubleLinkList.h"

NODEP initList()
{
    NODEP list = (NODEP)malloc(sizeof(NODE));
    list->pre = NULL;
    list->next = NULL;
    list->data = 0;
    return list;
}

void headInsert(NODEP list, int data)
{
    NODEP node = (NODEP)malloc(sizeof(NODE));
    node->pre = list;
    node->next = list->next;
    node->data = data;
    if (list->data != 0)
    {
        (list->next)->pre = node;
    }
    list->next = node;
    list->data++;
}

void tailInsert(NODEP list, int data)
{
    NODEP current = list;
    NODEP node = (NODEP)malloc(sizeof(NODE));
    node->data = data;
    while (current->next != NULL)
    {
        current = current->next;
    }
    node->next = current->next;
    current->next = node;
    node->pre = current;
    list->data++;
}

int deleteNode(NODEP list, int data)
{
    NODEP current = list->next;
    while (current != NULL)
    {
        if (current->data == data && current->next == NULL)
        {
            current->pre->next = NULL;
            free(current);
            list->data--;
            return TRUE;
        }
        else if (current->data == data && current->next != NULL)
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
    NODEP node = list->next;
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}