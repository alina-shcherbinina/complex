#pragma once
#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>
#include <cmath>

using namespace std;

class Complex {        
			private:
				double re, im;       // äåéñòâèòåëüíàÿ è ìíèìàÿ ÷àñòè

			public:
				// êîíñòðóêòîðû 
				Complex(){};

				Complex(double r);

				Complex(double r, double i);

				Complex(const Complex &c);
				// äåñòðóêòîð
				~Complex()
				{
				}

				// îñòàëüíûå ôóíêöèè

				// Ìîäóëü êîìïëåêñíîãî ÷èñëà
				double abs(const Complex &c);

				// îïåðàòîð ïðèñâàèâàíèÿ
				Complex& operator = (const Complex &c);

				// îïåðàòîð +=
				Complex& operator += (const Complex &c);

				// îïåðàòîð ñëîæåíèÿ
				Complex operator + (const Complex &c) const;

				// îïåðàòîð âû÷èòàíèÿ
				Complex operator - (const Complex &c) const;

				// îïåðàòîð óìíîæåíèÿ
				Complex operator * (const Complex &c) const;

				// îïåðàòîð äåëåíèÿ
				Complex operator / (const Complex &c) const;

				//âîçâåäåíèå â ñòåïåíü
				Complex power(const Complex &c, int n);

				//ðàñ÷åò ôàçû î÷åíü ñòðàøíî ïîêà íå çíàþ êàê 

				// ðàçðåøàåì äîñòóï ê private äàííûì
				friend ostream & operator<< (ostream &, const Complex &);
				friend istream & operator>> (istream &, Complex &);

};


#endif //
