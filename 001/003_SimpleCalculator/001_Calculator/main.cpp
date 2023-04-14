#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "Rus");

	double firstNumber, secondNumber;
	char arithmeticSign;

	cout << "\t\t\tПростой калькулятор." << endl << endl << endl;
	
	cout << "Введите два числа: ";
	cin >> firstNumber >> secondNumber;
	
	cout << "Выберите арифметическую операцию для этих чисел: + - * /" << endl << endl;
	cout << "Арифметическая операция: ";
	cin >> arithmeticSign;

	switch (arithmeticSign)
	{
		case '+':
			cout << "\nСумма чисел: " << firstNumber + secondNumber;
		break;

		case '-':
			cout << "\nСумма чисел: " << firstNumber - secondNumber;
		break;

		case '*':
			cout << "\nСумма чисел: " << firstNumber * secondNumber;
		break;

		case '/':
		{
			if (secondNumber == 0)
			{
				cout << "\nОшибка!!!";
				cout << "\nНа ноль делить нельзя.";
			}
			else
			{
				cout << "\nСумма чисел: " << firstNumber / secondNumber;
			}
		}
		break;

	default:
	{
		cout << "Ошибка!!!" << endl;
		cout << "Неправильная арифметическая операция." << endl;
	}
	break;
	}

	cout << "\n\nВсё, готово!" << endl;
	cout << "Программа завершена." << endl;
}