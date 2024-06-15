#include <stdio.h>
#include <stdlib.h>

#include "doubleLinkList.h"

int main()
{
    NODEP list = initList();
    headInsert(list, 1);
    headInsert(list, 2);
    headInsert(list, 3);

    tailInsert(list, 4);
    tailInsert(list, 5);
    tailInsert(list, 6);
    printList(list);

    deleteNode(list, 3);
    deleteNode(list, 6);
    deleteNode(list, 1);
    printList(list);
    return 0;
}