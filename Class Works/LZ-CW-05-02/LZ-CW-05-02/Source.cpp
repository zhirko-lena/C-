# include <iostream>
# include <ctime>
using namespace std;


//template < typename T>
//T Sum(T a, T b)
//{
//	return a + b;
//}

/*template < typename T>
void Demo(T a, T b) {
	cout << a << endl;
	cout << b << endl;
}*/

//template < typename T1, typename T2>
//void Demo(T1 a, T2 b) {
//	cout << a << endl;
//	cout << b << endl;
//}


//template < typename T1, typename T2>
//T1 Sum(T1 a, T2 b)
//{
//	return a + b;
//}

//int main() {
//
//	/*cout << Sum(8, 10) << endl;
//	cout << Sum(8.2, 2.4) << endl;
//
//	Demo(5, 1);
//	Demo(8.2, 2.4);
//	Demo("test", "world");
//	Demo(88, "world");*/
//
//	cout << Sum(8, 4.5) << endl;
//	cout << Sum(8.5, 4) << endl;
//	
//
//	system("pause");
//	return 0;
//}



/*----------------------------- Task 1-------------------------------------
------ C++: Написати наступні функції, які в якості параметра приймають одновимірний масив і його розмірністю.Перевірити роботу функції для одновимірних масивів довжини 10 та довжини 7.
функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні[-12..20]
шаблонну функцію Print(), яка виводить елементи масиву на екран.Примітка!Протестувати дану функцію на масивах типу int, double, char
функцію, яка повертає кількість відємних елементів масиву
перевантажені функції :
-для знаходження середнього арифметичного елементів масиву
- для знаходження максимального елемента масиву в проміжку(між двома вказаними індексами)--------*/



void FillArr(int arr[], const int Size);
template <typename T>
void Print(T arr[], const int Size);
void Negative(int arr[], const int Size);
int Max(int arr[], const int Size);


template <typename T>
void Print(T arr[], const int SIZE)
{
	cout << "TEMPLATE" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}


int main()
{
	const int SIZE = 7;
	int arr[SIZE];
	FillArr(arr, SIZE);
	Print(arr, SIZE);
	Negative(arr, SIZE);

	int max = Max(arr, SIZE);

	if (max > 14) {
		cout << "more then 14" << endl;
	}
	else {
		cout << "Less then" << endl;
	}
	cout << "Max element = " << max << endl;


	system("pause");
	return 0;
}


void FillArr(int arr[], const int Size) {
	srand(unsigned(time(NULL)));
	for (int i = 0; i < Size; i++)
	{
		arr[i] = rand() % 32 + -12;
	}
}

/*void Print(int arr[], const int Size) {
	cout << " PrintArr " << endl;
	for (int i = 0; i < Size; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}*/

void Negative(int arr[], const int Size) {
	int a = 0;
	for (int i = 0; i < Size; i++)
	{

		if (arr[i] < 0)
		{
			a++;
		}

	}
	cout << "Count of negative elements = " << a << endl;
}

/*void Average(int arr[], const int Size) {
	int b = 0;
		for (int i = 0; i < Size; i++)
	{

			b=arr[i]+;

	}
	cout << "Count og negative elements = " << b/Size << endl;
}*/

int Max(int arr[], const int Size) {
	int b = -100;

	for (int i = 0; i < Size; i++)
	{

		if (b < arr[i]) {
			b = arr[i];
		}

	}
	return b;
}












