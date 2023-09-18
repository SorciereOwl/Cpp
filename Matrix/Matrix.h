#pragma once
int** init(int& n, int& m);
void trans(int** Matr, int** A, int n, int m);
void printMatrix(int** Matr, int n, int m);
int** summ(int** A, int** T, int n, int m);
int** mult(int** A, int** T, int n1, int m1, int n2, int m2);

int** unTrans(int m, int n);
void deleteMatr(int** A, int n);