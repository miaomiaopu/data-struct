#include <stdio.h>
#include <stdlib.h>

#include "loopLinkList.h"

int main()
{
    NODEP list = initList();
    headInsert(list, 1);
    headInsert(list, 2);
    headInsert(list, 3);
    headInsert(list, 4);
    headInsert(list, 5);

    tailInsert(list, 6);
    tailInsert(list, 7);
    tailInsert(list, 8);
    tailInsert(list, 9);
    tailInsert(list, 10);

    printList(list);
    deleteNode(list, 5);
    deleteNode(list, 10);
    deleteNode(list, 6);
    if (deleteNode(list, 11) == 1) {
        fprintf(stderr, "Error, node not found!\n");
        exit(1);
    }
    
    printList(list);
    return 0;
}