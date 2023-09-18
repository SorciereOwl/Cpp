/*�������
����������� ����� �������� �������. � ������ ����������� ������ ��������������:
1. ������������ � �����������, ��������������� ������� ������� �������, � ����������� ��� ����������.
2. ������ ������� � ����� ������(get,set).
3. ������, ����������� ��������� � ������� ��������.
4. ������ toString, ������������ ���������� �� ������� � ���� ������.
����������������� ������ ������� ������ �� �������
    8. ������������(������������) ����� ��������������� ����� ����� ����� (a,b), ��� a - ���������,  b - �����������.
������� ����� Rational ��� ������ � ������������� �������. ����������� ������ ���� ����������� ��������:
- �������� add, (a,b) + (c,d) = (ad + bc, bd);
- ��������� sub, (a,b) - (c,d) = (ad - bc, bd);
- ��������� mul, (a,b)*(c,d) = (ac,bd)
- ������� div, (a,b)/(c,d) = (ad, bc);
- ��������� equal, greate, less. (==, >, <)
������ ���� ����������� ��������� ������� ���������� ����� reduce,
������� ����������� ���������� ��� ���������� �������������� ��������.*/

#include<iostream>
#include"header.h"


int main() {
    Rational r1(1, 2);
    Rational r2(2, 3);

    Rational sum = r1.add(r2);
    Rational diff = r1.sub(r2);
    Rational product = r1.mul(r2);
    Rational quotient = r1.div(r2);

    std::cout << "Sum: " << sum.toString() << std::endl;
    std::cout << "Difference: " << diff.toString() << std::endl;
    std::cout << "Product: " << product.toString() << std::endl;
    std::cout << "Quotient: " << quotient.toString() << std::endl;

    if (r1.equal(r2)) {
        std::cout << r1.toString() << " is equal to " << r2.toString() << std::endl;
    }
    else if (r1.greater(r2)) {
        std::cout << r1.toString() << " is greater than " << r2.toString() << std::endl;
    }
    else {
        std::cout << r1.toString() << " is less than " << r2.toString() << std::endl;
    }

    return 0;
}