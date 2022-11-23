#include <iostream>
#include "Matrix.h"

int** Init(int& n, int& m) // ‘ункци€, выполн€юща€ инициализаци€ матрицы
{
    std::cout << "¬ведите размер матрицы(nxm):";
    std::cin >> n >> m;

    int** Matr = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        Matr[i] = new int[m];
    }

    std::cout << "¬ведите элементы матрицы" << std::endl;
    for (int** i = (int**)Matr; i < (int**)Matr + n; ++i)
    {
        for (int* j = *i; j != (int*)*i + m; ++j)
        {
            std::cin >> *j; // заполнение массива введЄнными элементами
        }
    }
    return Matr;
}

void Trans(int** Matr, int** T, int n, int m) // ‘ункци€, выполн€юща€ транспонирование матрицы
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            T[i][j] = Matr[j][i];
        }
    }
    PrintMatrix(T, m, n); // вывод матрицы
}

void PrintMatrix(int** Matr, int n, int m) // ‘ункци€, выполн€юща€ печать матрицы
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cout << Matr[i][j] << "\t";
        }
        std::cout << "\n";
    }
}

int** Summ(int** A, int** T, int n, int m) // ‘ункци€ сложени€
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            A[i][j] = A[i][j] + T[i][j];
        }
    }
    return A;
}

int** Mult(int** A, int** T, int n1, int m1, int n2, int m2) // ‘ункци€ умножени€
{
    int** Matr = new int* [n1];
    for (int i = 0; i < n1; ++i)
    {
        Matr[i] = new int[m2];
    }
    for (int i = 0; i < n1; ++i)
    {
        for (int j = 0; j < m2; ++j)
        {
            Matr[i][j] = 0;
            for (int k = 0; k < m1; ++k)
            {
                Matr[i][j] += A[i][k] * T[k][j];
            }
        }
    }
    return Matr;
}

int** UnTrans(int m, int n)
{
    int** Matr = new int* [m];
    for (int i = 0; i < m; ++i)
    {
        Matr[i] = new int[n];
    }
    return Matr;
}

void DeleteMatr(int** A, int n) // ”даление
{
    for (int i = 0; i < n; ++i)
    {
        delete[]A[i];
    }
    delete[]A;
}

