#pragma once
class Complex;
class Matrix
{
	int n, m; // ����� ����� � ��������
	Complex **pMatr;
public:
	Matrix(Complex **pMatr, int n, int m);
	Matrix();
	~Matrix();
	void print(); // ������ �������
	Matrix & operator~(); // ���������� �������� ���������������� ������� (������������ ������� ������ �������� ������)

};

