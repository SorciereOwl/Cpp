#include "LinkedList.h"

int main() {
    LinkedList list;
    list.addElement(1);
    list.addElement(2);
    list.addElement(3);
    list.addElement(4);
    list.addElement(0);
    list.addElement(8);
    list.display();

    list.insertAfter(0, 1);
    list.insertAfter(1, 2);
    list.insertBefore(2, 3);
    list.display();

    list.removeAfter(1);
    list.removeBefore(3);
    list.removeCurrent();
    list.display();

    return 0;
}