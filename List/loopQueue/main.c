#include <stdio.h>
#include <stdlib.h>

#include "loopQueue.h"

int main()
{
    QUEUEP queue = initQueue();
    push(queue, 1);
    push(queue, 2);
    push(queue, 3);
    push(queue, 4);
    printQueue(queue);

    pop(queue);
    pop(queue);
    pop(queue);
    printQueue(queue);
    return 0;
}