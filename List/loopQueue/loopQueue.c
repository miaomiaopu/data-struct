#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "loopQueue.h"

QUEUEP initQueue()
{
    QUEUEP queue = (QUEUEP)malloc(sizeof(QUEUE));
    queue->front = queue->rear = 0;
    return queue;
}

bool push(QUEUEP queue, int data)
{
    if (isFull(queue))
    {
        return false;
    }
    queue->data[queue->rear] = data;
    queue->rear = (queue->rear + 1) % MAXSIZE;
    return true;
}

int pop(QUEUEP queue)
{
    if (isEmpty(queue))
    {
        return -1;
    }
    int data = queue->data[queue->front];
    queue->front = (queue->front + 1) % MAXSIZE;
    return data;
}

bool isEmpty(QUEUEP queue)
{
    if (queue->front == queue->rear)
    {
        return true;
    }
    return false;
}

bool isFull(QUEUEP queue)
{
    if ((queue->rear + 1) % MAXSIZE == queue->front)
    {
        return true;
    }
    return false;
}

void printQueue(QUEUEP queue)
{
    for (size_t i = queue->front; i != queue->rear; i = (i + 1) % MAXSIZE)
    {
        printf("%d ", queue->data[i]);
    }
    printf("\n");
}
