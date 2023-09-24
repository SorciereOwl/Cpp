#include "del.h"
#include <iostream>

LinkedList::LinkedList() {
    head = nullptr;
}

void LinkedList::insert(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void LinkedList::removeFirstOddGroup() {
    Node* curr = head;

    // Нахождение первой группы подряд идущих нечетных элементов

    while (curr != nullptr && curr->data % 2 == 1) {
        Node* temp = curr;
        curr = curr->next;
        delete temp;
    }
    head = curr;
}

void LinkedList::display() {
    Node* curr = head;
    while (curr != nullptr) {
        std::cout << curr->data << " ";
        curr = curr->next;
    }
    std::cout << std::endl;
}