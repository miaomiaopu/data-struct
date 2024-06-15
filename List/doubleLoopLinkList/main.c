#include <stdio.h>
#include <stdlib.h>

#include "doubleLoopLinkList.h"

int main()
{
    NODEP list = initList();
    headInsert(list, 1);
    headInsert(list, 2);
    headInsert(list, 3);
    tailInsert(list, 4);
    tailInsert(list, 5);
    printList(list);
    
    deleteNode(list, 1);
    deleteNode(list, 3);
    deleteNode(list, 5);
    printList(list);
    return 0;
}