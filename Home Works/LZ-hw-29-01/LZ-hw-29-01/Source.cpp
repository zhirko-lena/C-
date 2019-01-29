# include <iostream>
# include <ctime>

using namespace std;

/*---------------------------Task 1 ----------------------
--------------------------------------------------------
Написати програму, яка виконує реверс елементів одновимірного масиву, розміщених між крайніми від’ємними числами у масиві.Для розв’язку задачі визначити та використати функції :
-заповнення масиву
- вивід масиву
- пошук лівого від’ємного
- пошук правого від’ємного у масиві
- обертання частини масиву
--------------------------------------------------------*/

void PrintArr(int arr[], const int SIZE);
void FillArr(int arr[], const int SIZE);
void Left(int arr[], const int SIZE);
void Right(int arr[], const int SIZE);
const int Size = 9;



int main() {

	int arr[Size];
	int c = 0, d = 0;

	FillArr(arr, Size);
	PrintArr(arr, Size);
	Left(arr, Size);
	Right(arr, Size);




	/*c = a;
	d = b;*/





	system("pause");
	return 0;
}






void FillArr(int arr[], const int SIZE) {
	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 60 + -40;
	}
}



void PrintArr(int arr[], const int SIZE) {
	cout << " PrintArr " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}



void Left(int arr[], const int SIZE) {
	for (int i = 0; i < Size; i++)
	{
		if (arr[i] < 0)
		{
			cout << arr[i] << "- " << i << endl;
			int a = i;
			cout << a << endl;
			break;

		}

	}
}

void Right(int arr[], const int SIZE) {
	for (int i = 8; i >= 0; i--)
	{
		if (arr[i] < 0)
		{
			cout << arr[i] << "- " << i << endl;
			int b = i;
			cout << b << endl;
			break;

		}

	}
}





