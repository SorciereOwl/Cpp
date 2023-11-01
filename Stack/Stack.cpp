#include "stack.h"
#include <iostream>

Stack::Stack() {
    top = nullptr;
}

void Stack::push(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

int Stack::pop() {
    if (isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return -1;
    }
    int value = top->data;
    Node* temp = top;
    top = top->next;
    delete temp;
    return value;
}

int Stack::peek() {
    if (isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return -1;
    }
    return top->data;
}

void Stack::print() {
    if (isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return;
    }
    Node* temp = top;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

bool Stack::isEmpty() {
    return top == nullptr;
}

void Stack::clear() {
    while (!isEmpty()) {
        pop();
    }
}