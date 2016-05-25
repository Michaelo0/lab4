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
	this->pMatr = new Complex*[n]; // ������� ������ ���������� (��������� �� ������)
	for (int i = 0; i < n; i++) {
		this->pMatr[i] = new Complex[m]; // ������� ������ �������� (���������� ����������� ��� ����������)
		for (int j = 0; j < m; j++) // ���������������� ������� (�������� �������)
			this->pMatr[i][j].set(pMatr[i][j]);
	}

}

void Matrix::print() // ������ �������
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			pMatr[i][j].print();
		cout << endl; 
	}
}

Matrix & Matrix::operator~() // ���������� �������� ���������������� ������� 
{
	Matrix *pOb = new Matrix; // ������� ����� ������
	pOb->m = n;
	pOb->n = m;
	pOb->pMatr = new Complex*[m]; // ������� ������ ���������� (��������� �� ������)
	for (int i = 0; i < m; i++) {
		pOb->pMatr[i] = new Complex[n]; // ������� ������ �������� (���������� ����������� ��� ����������)
		for (int j = 0; j < n; j++) // ���������������� ������� (�������� �������)
			pOb->pMatr[i][j].set(pMatr[j][i]);
	}
	return *pOb;// ���������� ����� ��������� �������


}

Matrix::~Matrix()
{
	if (n > 0) // ������������ ������
	{
		for (int i = 0; i < n; i++) delete[] pMatr[i]; // ����������� ������ �� �������� � ������� �������
		delete[] pMatr;

	}
}

