#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "Rus");

	int begin, end, sum, initialValue;
	bool odd;

	sum = 0;

	cout << "\tНаходим сумму всех целых нечетных чисел в диапазоне." << endl << endl;
	cout << "Введите начальное и конечное значение: ";
	cin >> begin >> end;

	initialValue = begin;
	while (end >= begin)
	{
		odd = begin % 2 == 1;

		if (odd)
		{
			sum += begin;
		}
		begin++;
	}

	cout << "Сумма всех нечетных чисел в диапазоне от " 
		<< initialValue << " до " << end << ": " << sum << endl;
}