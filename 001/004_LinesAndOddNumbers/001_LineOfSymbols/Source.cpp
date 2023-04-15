#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "Rus");

	char symbol;
	int characters, choise, counter = 0;
	bool examination;

	cout << "\t\t\tЛиния из символов." << endl << endl;

	cout << "Введите символ: ";
	cin >> symbol;
	cout << "Введите количество символов: ";
	cin >> characters;	

	do
	{
		cout << "Какую линию будем рисовать:" << endl
			<< "\t1 - Горизонтальную." << endl
			<< "\t2 - Вертикальную." << endl << endl;
		cout << "Ваш выбор: ";
		cin >> choise;

		if (choise == 1 || choise == 2)
			examination = false;
		else
		{
			cout << "\nОшибка ввода!" << endl;
			cout << "Повторите ввод." << endl << endl;
			examination = true;
		}
	} while (examination);

	switch (choise)
	{
		case 1:
		{
			cout << endl;
			while (counter < characters)
			{
				cout << symbol;
				counter++;
			}
		}
		break;

		case 2:
		{
			cout << endl;
			while (counter < characters)
			{
				cout << symbol << endl;
				counter++;
			}
		}
		break;
	}

	cout << "\n\nВсё, готово!" << endl;
	cout << "Программа завершена." << endl << endl;
}