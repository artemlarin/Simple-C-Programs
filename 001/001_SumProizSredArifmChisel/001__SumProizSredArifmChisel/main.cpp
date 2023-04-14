#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int a, b, c;

	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Введите третье число: ";
	cin >> c;

	cout << "\nЗначение суммы чисел: " << a + b + c;
	cout << "\nПроизведение чисел: " << a * b * c;
	cout << "\nСреднее арифметическое чисел: " << (double)(a + b + c) / 3 << endl; 
}