/*����������� ����� �������� �������. � ������ ����������� ������ ��������������:
1. ������������, ��������������� �������� ������� �������
2.����������� �����������
3.����������
4.������������� �������������� ��������(� ���� ������� ������)
5.������������� �������� ���������(� ���� �������)
6.������������� �������� ������������
7.������������� �������� << � >>

�������� �����. ����� �������������� �������(x - e1, x , x + e2). ���� ������ ���� ������������ ����������� �� ������������ ���.*/

#include <iostream>
#include "fuzzy.h"

int main() {
    FuzzyNumber a(5, 0.1,0.2);
    FuzzyNumber b(3, 0.1, 0.2);

    FuzzyNumber c = a + b;
    FuzzyNumber d = a - b;
    FuzzyNumber e = a * b;
    // ...

    if (a == b) {
        std::cout << "a equals b" << std::endl;
    }

    if (a < b) {
        std::cout << "a is less than b" << std::endl;
    }

    // ...

  /*  std::cout << "Enter a fuzzy number (format: x, e1, e2): ";
    std::cin >> a;*/

    //std::cout << "Entered fuzzy number: " << a << std::endl;

    std::cout << "Entered fuzzy number: " << c << std::endl;
    std::cout << "Entered fuzzy number: " << d << std::endl;
    std::cout << "Entered fuzzy number: " << e << std::endl;

    return 0;
}