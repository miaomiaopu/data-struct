#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "queue.h"

NODEP initQueue()
{
    NODEP queue = (NODEP)malloc(sizeof(NODE));
    queue->data = 0;
    queue->next = NULL;
    return queue;
}

void push(NODEP queue, int data)
{
    NODEP current = queue;
    NODEP node = (NODEP)malloc(sizeof(NODE));
    node->data = data;
    node->next = NULL;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = node;
    queue->data++;
}

bool isEmpty(NODEP queue)
{
    if (queue->data == 0 || queue->next == NULL)
    {
        return true;
    }
    return false;
}

int pop(NODEP queue)
{
    if (isEmpty(queue))
    {
        return -1;
    }
    NODEP node = queue->next;
    int data = node->data;
    queue->next = node->next;
    free(node);
    return data;
}

int top(NODEP queue)
{
    if (isEmpty(queue))
    {
        return -1;
    }
    return queue->next->data;
}

void printQueue(NODEP queue)
{
    NODEP node = queue->next;
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}