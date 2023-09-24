#pragma once

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    void insert(int value);
    void removeFirstOddGroup();
    void display();
};
