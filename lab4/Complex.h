#pragma once
class Complex
{
	double im; // private
	double re;
public:

	Complex(double re, double im);
	Complex(Complex & Ob); // ����������� �����������
	Complex();
	~Complex();
	void print();
	friend Complex& operator+(Complex& ob1, Complex& ob2);
	// ��������� ����������� �����
	Complex & operator*(Complex & ob2);
	void set(Complex &Ob); // ������� ��� ������������� ����� ������
	void set(double re, double im); // ������� ��� ������������� ����� ������

};

