#include "del.h"
#include<iostream>

int main() {
    LinkedList list;
    list.insert(1);
    list.insert(3);
    list.insert(5);
    list.insert(2);
    list.insert(4);
    list.insert(6);

    list.display();
    list.removeFirstOddGroup();
    list.display();

    return 0;
}


