#include <iostream>
#include "header.h"

int main()
{
    LinkedList list;

    list.addFirst(3);
    list.addFirst(2);
    list.addFirst(1);

    list.printList();

    list.addFirst(3);
    list.addAfter(2, 4);

    list.printList();

    list.addAfter(5, 6);

    list.printList();

    return 0;
}