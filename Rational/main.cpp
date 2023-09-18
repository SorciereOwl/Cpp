/*ЗАДАНИЕ
Реализовать класс согласно заданию. В классе обязательно должны присутствовать:
1. Конструкторы с параметрами, соответствующие способы задания объекта, и конструктор без параметров.
2. Методы доступа к полям класса(get,set).
3. Методы, руализующие указанные в задании операции.
4. Метода toString, возвращающий информациб об объекте в виде строки.
Проиллюстрировать работу методов класса на примере
    8. Рациональная(несократимая) дробь предстаавляется парой целых чисел (a,b), где a - числитель,  b - знаменатель.
Создать класс Rational для работы с рациональными дробями. Обязательно должны быть реализованы операции:
- сложения add, (a,b) + (c,d) = (ad + bc, bd);
- вычитания sub, (a,b) - (c,d) = (ad - bc, bd);
- умножения mul, (a,b)*(c,d) = (ac,bd)
- деления div, (a,b)/(c,d) = (ad, bc);
- сравнения equal, greate, less. (==, >, <)
Должна быть реализована приватная функция сокращения дроби reduce,
которая обязательно вызывается при выполнении арифметических операций.*/

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