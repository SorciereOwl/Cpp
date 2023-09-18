#include <iostream>
#include "Matrix.h"


int main()
{
	setlocale(LC_ALL, "ru");

	int n, m, n1, m1, n2, m2;
	int** A, ** T, ** B;

	/*���������������� �������*/
	A = init(n, m);
	T = unTrans(m, n);
	std::cout << "�������� �������: " << std::endl;
	printMatrix(A, n, m);
	std::cout << "����������������� �������" << std::endl;
	trans(A, T, n, m);
	deleteMatr(A, n);
	deleteMatr(T, n);

	/*�������� ������*/
	A = init(n, m);
	n1 = n, m1 = m;
	T = init(n, m);
	n2 = n, m2 = m;
	while (n1 != n2 || m1 != m2)
	{
		std::cout << "���������� ������� ����� ������ ����������� �������. ������� ���������� ������� ������: ";
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
	/*��������� ������*/
	A = init(n, m);
	n1 = n, m1 = m;
	T = init(n, m);
	n2 = n, m2 = m;
	while (m1 != n2)
	{
		std::cout << "����� �������� 1-�� ������� ������ ���� ����� ����� ����� 2-�� �������. ������� ����� ��������: ";
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