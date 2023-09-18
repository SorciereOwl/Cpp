#include "header.h"
#include <iostream>

LinkedList::LinkedList()
{
    head = nullptr;
}

LinkedList::~LinkedList()
{
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::addFirst(int data)
{
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void LinkedList::addAfter(int searchData, int data)
{
    Node* current = head;
    while (current != nullptr && current->data != searchData) {
        current = current->next;
    }
    if (current != nullptr) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = current->next;
        current->next = newNode;
    }
    else {
        std::cout << "Element not found!" << std::endl;
    }
}

void LinkedList::printList()
{
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}