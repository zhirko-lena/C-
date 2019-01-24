#include <ctime>
#include <iostream>
#include <Windows.h>

using namespace std;
int main()
{
	srand(unsigned(time(NULL)));



	/*-------------------------------Task 1-------------------------------*/

	/*const int SIZE = 7;
	int arrA[SIZE], arrB[SIZE], arrC[SIZE * 2];


	for (int i = 0; i < SIZE; i++)
	{
		arrA[i] = rand() % 100 + 0;
		cout << "A element " << i << ": " << arrA[i] << endl;
	}

	for (int j = 0; j < SIZE; j++)
	{
		arrB[j] = rand() % 100 + 0;
		cout << "B element " << j << ": " << arrB[j] << endl;
	}


	for (int i = 0; i < SIZE; i++)
	{
		arrC[i] = arrA[i];
		cout << "C element " << i << ": " << arrC[i] << endl;
	}

	int b = 0;
	for (int i = 7; i < SIZE * 2; i++)
	{

		arrC[i] = arrB[b];
		b++;
		cout << "C element " << i << ": " << arrC[i] << endl;

	}*/


	/*-------------------------------Task 2-------------------------------*/

	/*const int SIZE = 12;
	int arrA[SIZE], arrB[SIZE/2], arrC[SIZE/2];

	for (int i = 0; i < SIZE; i++)
	{
		arrA[i] = rand() % 100 + 0;
		cout << "A element " << i+1 << ": " << arrA[i] << endl;

	}

	for (int i = 0; i < SIZE/2; i++)
	{
		arrB[i] = arrA[i];
		cout << "B element " << i + 1 << ": " << arrB[i] << endl;

	}
	int b = 0;
	for (int i = 6; i < SIZE; i++)
	{
		b++;
		arrC[i] = arrA[i];
		cout << "C element " << b << ": " << arrC[i] << endl;

	}*/


	/*------------------------------ - Task 3------------------------------ -*/

	const int SIZE = 11;
	int arr[SIZE], arr1[SIZE], count = 0, direction = 0, a = 0, b = 0, i = 0;

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100 + 0;
		cout << "Element " << i + 1 << ": " << arr[i] << ", ";

	}
	cout << endl;
	cout << "Please choose direction and count for to move element (Left- press 1, Right- press 2): ";
	cout << "Direction- ";
	cin >> direction;
	cout << "Count- ";
	cin >> count;
	if (direction == 1)
	{
		arr1[6 - count] = arr[6];
		arr1[6] = arr[6 - count];

		for (int i = 0; i < 6 - count; i++)
		{
			arr1[i] = arr[i];

			cout << "Element " << i + 1 << ": "<< arr1[i] << ", ";
		}

		cout << "Element " << 6 - count << arr1[6 - count] << ", ";

		for (int i = 6 - count+1; i < 6; i++)
		{
			arr1[i] = arr[i];
			
			cout << "Element " << i + 1 << ": " << arr1[i] << ", ";
		}

		cout << "Element " << 6 << arr1[6] << ", ";
		for (int i = 6+1; i < SIZE; i++)
		{
			arr1[i] = arr[i];

			cout << "Element " << i + 1 << ": " << arr1[i] << ", ";
		}

	}

	else if (direction == 2)
	{
		arr1[6 + count] = arr[6];
		arr1[6] = arr[6 + count];

		for (int i = 0; i < 6; i++)
		{
			arr1[i] = arr[i];

			cout << "Element " << i + 1 << ": " << arr1[i] << ", ";
		}

		cout << "Element " << 6 + count << ": " << arr1[6 + count] << ", ";

		for (int i = 6 + count + 1; i < 6; i++)
		{
			arr1[i] = arr[i];
			
			cout << "Element " << i + 1 << ": " << arr1[i] << ", ";
		}

		cout << "Element " << 6 << ": " << arr1[6] << ", ";
		for (int i = 6 + 1; i < SIZE; i++)
		{
			arr1[i] = arr[i];

			cout << "Element " << i + 1 << ": " << arr1[i] << ", ";
		}


	}


	/*------------------------------ - Task 4------------------------------ -*/

	/*Програма «Іподром».У кожному забігу приймає участь 5 коней.Передбачити наступні дії :
	o	початок забігу(виводиться  загальна сума грошового призу);
	o	здійснити ставку для поточного забігу
	o	результат забігу(номер коня - переможця, кількість зіграних ставок(випадкове число) та сума виграшу гравця(якщо зіграла ставка).
*/



	/*const int SIZE = 11;
	int arr[SIZE], arr1[SIZE], count = 0, direction = 0, a = 0, b = 0, i = 0;

	for (int i = 0; i < SIZE; i++)*/








		system("pause");
	return 0;
}