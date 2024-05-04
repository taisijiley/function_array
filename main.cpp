#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

/*Передача массива с функциями*/

void FillArray(int arr[], const int size)
{
	srand(time(NULL));

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void PrintArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	const int SIZE = 10;
	int arr[SIZE];
	
	FillArray(arr, SIZE);

	PrintArray(arr, SIZE);
}