#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() { //Конструктор
    head = nullptr;
}

LinkedList::~LinkedList() { //Деструктор
    clear();
}

bool LinkedList::isEmpty() { //Проверка на пустоту
    return head == nullptr;
}

void LinkedList::addElement(int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = nullptr;

    if (head == nullptr) {
        newNode->prev = nullptr;
        head = newNode;
        return;
    }

    Node* curr = head;
    while (curr->next != nullptr) {
        curr = curr->next;
    }
    curr->next = newNode;
    newNode->prev = curr;
}

void LinkedList::clear() { //Очистка
    Node* curr = head;
    while (curr != nullptr) {
        Node* temp = curr;
        curr = curr->next;
        delete temp;
    }
    head = nullptr;
}

void LinkedList::insertAfter(int key, int newData) { // Добавление после заданного
    Node* newNode = new Node;
    newNode->data = newData;

    Node* curr = search(key);
    if (curr == nullptr) {
        delete newNode;
        return;
    }

    newNode->next = curr->next;
    if (curr->next != nullptr) {
        curr->next->prev = newNode;
    }
    curr->next = newNode;
    newNode->prev = curr;
}

void LinkedList::insertBefore(int key, int newData) { // Добавление перед заданным
    Node* newNode = new Node;
    newNode->data = newData;

    Node* curr = search(key);
    if (curr == nullptr) {
        delete newNode;
        return;
    }

    newNode->prev = curr->prev;
    if (curr->prev != nullptr) {
        curr->prev->next = newNode;
    }
    curr->prev = newNode;
    newNode->next = curr;
}

void LinkedList::removeAfter(int key) { //Удаление после заданного
    Node* curr = search(key);
    if (curr == nullptr || curr->next == nullptr) {
        return;
    }

    Node* temp = curr->next;
    curr->next = temp->next;
    if (temp->next != nullptr) {
        temp->next->prev = curr;
    }
    delete temp;
}

void LinkedList::removeBefore(int key) { //Удаление перед заданным
    Node* curr = search(key);
    if (curr == nullptr || curr->prev == nullptr) {
        return;
    }

    Node* temp = curr->prev;
    curr->prev = temp->prev;
    if (temp->prev != nullptr) {
        temp->prev->next = curr;
    }
    delete temp;
}

void LinkedList::removeCurrent() { //Удаление текущего
    if (head == nullptr) {
        return;
    }

    Node* curr = head;
    head = head->next;
    if (head != nullptr) {
        head->prev = nullptr;
    }
    delete curr;
}

Node* LinkedList::search(int key) { //Поиск
    Node* curr = head;
    while (curr != nullptr && curr->data != key) {
        curr = curr->next;
    }
    return curr;
}

void LinkedList::display() { // Вывод
    Node* curr = head;
    while (curr != nullptr) {
        std::cout << curr->data << " ";
        curr = curr->next;
    }
    std::cout << std::endl;
}