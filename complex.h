#pragma once
#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>
#include <cmath>

using namespace std;

class Complex {        
			private:
				double re, im;      // �������������� � ������ �����

			public:
				// ������������ 
				Complex(){};

				Complex(double r);

				Complex(double r, double i);

				Complex(const Complex &c);
				// ����������
				~Complex()
				{
				}

				// ��������� �������

				// ������ ������������ �����
				double abs(const Complex &c);

				// �������� ������������
				Complex& operator = (const Complex &c);

				// �������� +=
				Complex& operator += (const Complex &c);

				// �������� ��������
				Complex operator + (const Complex &c) const;

				// �������� ���������
				Complex operator - (const Complex &c) const;

				// �������� ���������
				Complex operator * (const Complex &c) const;

				// �������� �������
				Complex operator / (const Complex &c) const;

				//���������� � �������
				Complex power(const Complex &c, int n);

				//������ ���� ����� ������� ���� �� ���� ��� 

				// ��������� ������ � private ������
				friend ostream & operator<< (ostream &, const Complex &);
				friend istream & operator>> (istream &, Complex &);

};


#endif //