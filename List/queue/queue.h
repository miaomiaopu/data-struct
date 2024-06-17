#ifndef QUEUE_H__
#define QUEUE_H__

#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *NODEP;

NODEP initQueue();

void push(NODEP queue, int data);

bool isEmpty(NODEP queue);

int pop(NODEP queue);

int top(NODEP queue);

void printQueue(NODEP queue);

#endif // QUEUE_H__