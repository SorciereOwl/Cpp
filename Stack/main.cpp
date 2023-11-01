#include "stack.h"
#include <iostream>

int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.print(); // Output: 3 2 1

    std::cout << "Top element: " << stack.peek() << std::endl; // Output: 3

    stack.pop();

    stack.print(); // Output: 2 1

    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl; // Output: No

    stack.clear();

    stack.print(); // Output: Stack is empty

    return 0;
}