#pragma once

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    void addFirst(int data);
    void addAfter(int searchData, int data);
    void printList();

private:
    Node* head;
};