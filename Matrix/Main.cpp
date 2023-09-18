#include <iostream>
#include "Matrix.h"


int main()
{
	setlocale(LC_ALL, "ru");

	int n, m, n1, m1, n2, m2;
	int** A, ** T, ** B;

	/*Транспонирование матрицы*/
	A = init(n, m);
	T = unTrans(m, n);
	std::cout << "Введённая матрица: " << std::endl;
	printMatrix(A, n, m);
	std::cout << "Транспонированная матрица" << std::endl;
	trans(A, T, n, m);
	deleteMatr(A, n);
	deleteMatr(T, n);

	/*Сложение матриц*/
	A = init(n, m);
	n1 = n, m1 = m;
	T = init(n, m);
	n2 = n, m2 = m;
	while (n1 != n2 || m1 != m2)
	{
		std::cout << "Складывать матрицы можно только одинакового размера. Введите одинаковые размеры матриц: ";
		deleteMatr(A, n1);
		deleteMatr(T, n1);
		A = Init(n, m);
		n1 = n;
		m1 = m;
		T = Init(n, m);
		n2 = n;
		m2 = m;
	}
	printMatrix(Summ(A, T, n, m), n, m);
	deleteMatr(A, n);
	deleteMatr(T, n);
	/*Умножение матриц*/
	A = init(n, m);
	n1 = n, m1 = m;
	T = init(n, m);
	n2 = n, m2 = m;
	while (m1 != n2)
	{
		std::cout << "Число столбцов 1-ой матрицы должно быть равно числу строк 2-ой матрицы. Введите такие значения: ";
		deleteMatr(A, n1);
		deleteMatr(T, n1);
		A = init(n, m);
		n1 = n;
		m1 = m;
		T = init(n, m);
		n2 = n;
		m2 = m;
	}
	B = mult(A, T, n1, m1, n2, m2);
	printMatrix(B, n1, m2);

	return 0;
}