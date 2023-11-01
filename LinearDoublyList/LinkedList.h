#pragma once
struct Node {
    int data;
    Node* prev;
    Node* next;
};

class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    bool isEmpty();
    void addElement(int newData);
    void clear();
    void insertAfter(int key, int newData);
    void insertBefore(int key, int newData);
    void removeAfter(int key);
    void removeBefore(int key);
    void removeCurrent();
    Node* search(int key);
    void display();

private:
    Node* head;
};
