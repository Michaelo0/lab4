#pragma once
class Complex
{
	double im; // private
	double re;
public:

	Complex(double re, double im);
	Complex(Complex & Ob); // Конструктор копирования
	Complex();
	~Complex();
	void print();
	friend Complex& operator+(Complex& ob1, Complex& ob2);
	// Умножение комплексных чисел
	Complex & operator*(Complex & ob2);
	void set(Complex &Ob); // Функция для инициализации полей класса
	void set(double re, double im); // Функция для инициализации полей класса

};

