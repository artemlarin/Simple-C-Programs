#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "Rus");

	int height, width;

	cout << "\t\tПрямоугольник символом *" << endl << endl;

	cout << "Введите высоту прямоугольника: ";
	cin >> height;
	cout << "Введите ширину прямоугольника: ";
	cin >> width;

	cout << endl;
	for (int  i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "\nВсе, готово!" << endl;
	cout << "Программа завершена." << endl << endl;
}