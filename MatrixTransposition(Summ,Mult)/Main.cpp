#include <iostream>
#include "Matrix.h"


int main()
{
	setlocale(LC_ALL, "ru");

	int n, m, n1,m1,n2,m2;
	int** A, ** T, ** B;

	/*Транспонирование матрицы*/
	A = Init(n, m);
	T = UnTrans( m, n);
	std::cout << "Введённая матрица: " << std::endl;
	PrintMatrix(A,n,m);
	std::cout << "Транспонированная матрица" << std::endl;
	Trans(A, T, n, m);
	DeleteMatr(A, n);
	DeleteMatr(T, n);

	/*Сложение матриц*/
	A = Init(n, m);
	n1 = n, m1 = m;
	T = Init(n, m);
	n2 = n, m2 = m;
	while (n1 != n2 || m1 != m2)
	{
		std::cout << "Складывать матрицы можно только одинакового размера. Введите одинаковые размеры матриц: ";
		DeleteMatr(A, n1);
		DeleteMatr(T, n1);
		A = Init(n, m);
		n1 = n;
		m1 = m;
		T = Init(n, m);
		n2 = n;
		m2 = m;
	}
	PrintMatrix(Summ(A,T,n,m), n, m);
	DeleteMatr(A, n);
	DeleteMatr(T, n);
	/*Умножение матриц*/
	A = Init(n, m);
	n1 = n, m1 = m;
	T = Init(n, m);
	n2 = n, m2 = m;
	while (m1 != n2)
	{
		std::cout << "Число столбцов 1-ой матрицы должно быть равно числу строк 2-ой матрицы. Введите такие значения: ";
		DeleteMatr(A, n1);
		DeleteMatr(T, n1);
		A = Init(n, m);
		n1 = n;
		m1 = m;
		T = Init(n, m);
		n2 = n;
		m2 = m;
	}
	B = Mult(A, T, n1, m1, n2, m2);
	PrintMatrix(B, n1, m2);

	return 0;
}