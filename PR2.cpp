// Lab_02.cpp
// < Кирилленко >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 11
#include <iostream>

using namespace std;
int main()
{
	double alpha; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "alpha = "; cin >> alpha;
	z1 = (1 - 2 * (sin(alpha) * sin(alpha))) / (1 + sin(2 * alpha));
	z2 = (1 - tan(alpha)) / (1 + tan(alpha));
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}

