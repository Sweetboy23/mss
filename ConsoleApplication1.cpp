#include <iostream>
using namespace std;
const int N = 10;
int main()
{

	int array[N];

	for (int j = 0; j < N; j++)
	{
		cout << "Enter array [" << j << "] -> ";
		cin >> array[j];
	}
	// вывод подсказки
	cout << "\n\nThe entered array\n";
	// цикл вывода элементов массива
	for (int j = 0; j < N; j++)
		cout << array[j] << '\t';
	cout << endl;
	return 0;
}