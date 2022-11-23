#pragma once
int** Init(int& n, int& m);
void Trans(int** Matr, int** A, int n, int m);
void PrintMatrix(int** Matr, int n, int m);
int** Summ(int** A, int** T, int n, int m);
int** Mult(int** A, int** T, int n1, int m1, int n2, int m2);

int** UnTrans(int m, int n);
void DeleteMatr(int** A, int n);