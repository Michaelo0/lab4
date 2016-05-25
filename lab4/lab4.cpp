// lab4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Complex.h"
#include "Matrix.h"

Complex& operator+(Complex& ob1, Complex& ob2)
{
	Complex *pOb = new Complex(ob1.re + ob2.re, ob1.im + ob2.im);
	return *pOb;
}

int _tmain(int argc, _TCHAR* argv[])
{
	Complex Ob1(2.3, 7.67), Ob2(3.9, 7.8);
	Complex Ob3 = Ob1 + Ob2; 
	Complex Ob4 = Ob1*Ob2;
	Ob3.print(); cout << endl;
	Ob4.print(); cout << endl;
	int n, m;
	cout << "n="; cin >> n;
	cout << "m="; cin >> m;
	Complex **pCom; 
	pCom = new Complex*[n]; // Создаем массив указателей
	for (int i = 0; i < n; i++)
	{
		pCom[i] = new Complex[m]; // Создаем массив неинициализированных объектов
		for (int j = 0; j < m; j++) pCom[i][j].set((rand() % 10000) / 100., (rand() % 10000) / 100.);
	}

	Matrix Matr1(pCom, n, m); // Создаю объект матрицы
	Matrix Matr2 = ~Matr1; // Matr1.operator~();
	cout << "First matrix:" << endl;
	Matr1.print();
	cout << "Second matrix:" << endl;
	Matr2.print();


	return 0;
}

