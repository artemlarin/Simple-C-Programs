#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "Rus");

	int number;
	bool evenNumber;

	cout << "Введите число: ";
	cin >> number;

	evenNumber = number % 2 == 0;

	if (evenNumber)
	{
		cout << "\nВаше число: " << number << " четное" << endl;
	}
	else
	{
		cout << "\nВаше число: " << number << " не четное" << endl;
	}

	cout << "\nВсе готово!\n";
	cout << "Программа завершена.\n";
}