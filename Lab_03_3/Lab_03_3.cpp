// Lab_03_3.cpp
// Чернієнко Максима
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 25

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
// розгалуження в повній формі
	if (x <= -2)
		y = -1 + (x + 4);
	else
		if (x > -2 && x <= 4)
			y = 1 + (-R - 1) / 6 * (x + 2);
		else
			if (x > 8 - R && x <= 8 + R)
				y = sqrt(pow(R, 2) - pow(x, 2) + 16 * x - 64) - R;
			else
				y = -R;
	cout << "y= " << y;
}