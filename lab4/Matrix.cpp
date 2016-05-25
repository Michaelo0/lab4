#include "stdafx.h"
#include "Matrix.h"
#include "Complex.h"
#include <iostream>
using namespace std;


Matrix::Matrix()
{
}

Matrix::Matrix(Complex **pMatr, int n, int m)
{
	this->n = n;
	this->m = m;
	this->pMatr = new Complex*[n]; // Создаем массив указателей (указатель на строки)
	for (int i = 0; i < n; i++) {
		this->pMatr[i] = new Complex[m]; // Создаем массив объектов (вызывается конструктор без параметров)
		for (int j = 0; j < m; j++) // Инициализхимруем объекты (элементы матрицы)
			this->pMatr[i][j].set(pMatr[i][j]);
	}

}

void Matrix::print() // Печать матрицы
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			pMatr[i][j].print();
		cout << endl; 
	}
}

Matrix & Matrix::operator~() // Перегрузка операции транспонирование матрицы 
{
	Matrix *pOb = new Matrix; // Создаем новый объект
	pOb->m = n;
	pOb->n = m;
	pOb->pMatr = new Complex*[m]; // Создаем массив указателей (указатель на строки)
	for (int i = 0; i < m; i++) {
		pOb->pMatr[i] = new Complex[n]; // Создаем массив объектов (вызывается конструктор без параметров)
		for (int j = 0; j < n; j++) // Инициализхимруем объекты (элементы матрицы)
			pOb->pMatr[i][j].set(pMatr[j][i]);
	}
	return *pOb;// Возвращает новую созданную матрицу


}

Matrix::~Matrix()
{
	if (n > 0) // Освобождение памяти
	{
		for (int i = 0; i < n; i++) delete[] pMatr[i]; // Освобождаем память от объектах в строках матрицы
		delete[] pMatr;

	}
}

