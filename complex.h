#pragma once
#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>
#include <cmath>

using namespace std;

class Complex {        
			private:
				double re, im;      // действительная и мнимая части

			public:
				// конструкторы 
				Complex(){};

				Complex(double r);

				Complex(double r, double i);

				Complex(const Complex &c);
				// деструктор
				~Complex()
				{
				}

				// остальные функции

				// Модуль комплексного числа
				double abs(const Complex &c);

				// оператор присваивания
				Complex& operator = (const Complex &c);

				// оператор +=
				Complex& operator += (const Complex &c);

				// оператор сложения
				Complex operator + (const Complex &c) const;

				// оператор вычитания
				Complex operator - (const Complex &c) const;

				// оператор умножения
				Complex operator * (const Complex &c) const;

				// оператор деления
				Complex operator / (const Complex &c) const;

				//возведение в степень
				Complex power(const Complex &c, int n);

				//расчет фазы очень страшно пока не знаю как 

				// разрешаем доступ к private данным
				friend ostream & operator<< (ostream &, const Complex &);
				friend istream & operator>> (istream &, Complex &);

};


#endif //
