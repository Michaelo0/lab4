#pragma once
class Complex;
class Matrix
{
	int n, m; // Число строк и столбцов
	Complex **pMatr;
public:
	Matrix(Complex **pMatr, int n, int m);
	Matrix();
	~Matrix();
	void print(); // Печать матрицы
	Matrix & operator~(); // Перегрузка операции транспонирование матрицы (единственный операнд объект текущего класса)

};

