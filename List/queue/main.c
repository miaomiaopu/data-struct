#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

int main()
{
    NODEP queue = initQueue();
    push(queue, 1);
    push(queue, 2);
    push(queue, 3);
    push(queue, 4);
    printQueue(queue);
    printf("%d %d %d\n", pop(queue), pop(queue), top(queue)); // 输出结果是2 1 1, 也就是可能从右往左计算，或者是从右往左填入数据，之后查询
    printQueue(queue);
    return 0;
}