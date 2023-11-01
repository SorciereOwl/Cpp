#pragma once
struct Node{
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;
public:
    Stack();
    void push(int value);
    int pop();
    int peek();
    void print();
    bool isEmpty();
    void clear();
};