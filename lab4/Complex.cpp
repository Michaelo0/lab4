#include "stdafx.h"
#include "Complex.h"
#include <iostream>



Complex::Complex()
{
	re = im = 0;
}
Complex::Complex(double re, double im)
{
	this->im = im;
	this->re = re;

}

Complex::Complex(Complex & Ob) // Конструктор копирования
{
	re = Ob.re;
	im = Ob.im;
}

void Complex::set(Complex &Ob) // Функция для инициализации полей класса
{
	re = Ob.re;
	im = Ob.im;
}

void Complex::set(double re, double im) // Функция для инициализации полей класса
{
	this->im = im;
	this->re = re;

}

Complex::~Complex()
{
}
void Complex::print()
{
	std::cout << "(" << re << ", " << im << ") ";
}

// Умножение комплексных чисел
Complex & Complex::operator*(Complex & ob2) 
{
	//TODO: insert return statement here

	Complex *pOb = new Complex(re * ob2.re - im*ob2.im, re*ob2.im + im*ob2.re);
	return *pOb;

}
