#ifndef LOOP_QUEUE_H__
#define LOOP_QUEUE_H__

#include "stdbool.h"

#define MAXSIZE 10

typedef struct Queue
{
    int front;
    int rear;
    int data[MAXSIZE];
} QUEUE, *QUEUEP;

QUEUEP initQueue();

bool push(QUEUEP queue, int data);

int pop(QUEUEP queue);

bool isEmpty(QUEUEP queue);

bool isFull(QUEUEP queue);

void printQueue(QUEUEP queue);

#endif // LOOP_QUEUE_H__