#include <iostream>
#include <ctime>

using namespace std;



/*------------- Task 1 (Написати функції :
-Заповнення масиву;
-Виводу одновимірного масиву на екран(функція отримує вказівник на перший елемент масиву);
-Виводу елементів масиву, які стоять на парних місцях, на екран(функція отримує вказівник на третій!!!елемент масиву)------------*/


//void FillArr(int arr[], const int Size) {
//
//	for (int i = 0; i < Size; i++)
//	{
//		arr[i] = rand() % 102 + -32;
//	}
//}
//
//
//
//void Print(int arr[], const int Size) {
//	cout << " PrintArr " << endl;
//	
//	for (int i = 0; i < Size; i++) {
//		cout << "arr[" << i << "] = " << arr[i] << endl;
//		cout << " PrintArr " << &arr[i] << endl;
//	}
//	}
//	
//
//
//
//void PrintTWO(int arr[], const int Size) {
//	cout << " PrintArrTWO " << endl;
//	for (int i = 2; i < Size; i++) {
//
//		if (i % 2 == 0) {
//
//
//			cout << "arr[" << i << "] = " << arr[i] <<"; Address= " << &arr[i] <<endl;
//
//		}
//		
//	}
//	
//}
//
//
//int main() {
//
//	/*int *P = new int;
//	*P = 10;
//	cout<< "Value = "<< *P <<"; Address = " << P <<endl;
//
//	delete P;
//
//	cout << "Value = " << *P << "; Address = " << P << endl;*/
//	
//	srand(unsigned(time(NULL)));
//	const int Size = 7;
//	int arr[Size];
//	
//	
//	   
//	FillArr(arr, Size);
//	Print(arr, Size);
//	PrintTWO(arr, Size);
//
//
//	system("pause");
//		return 0;
//}



/*-------- Task 2 (Написати функцію, яка виводить на екран 10 випадкових чисел у діапазоні від 0 до 17 і підраховує їх суму та добуток. Сума та добуток повинні вивестись в мейні)--------*/



//void FillArr(int arr[], const int Size) {
//
//	for (int i = 0; i < Size; i++)
//	{
//		arr[i] = rand() % 17 + 0;
//	}
//}
//
//
//
//void Print(int arr[], const int Size) {
//	cout << " PrintArr " << endl;
//
//	for (int i = 0; i < Size; i++) {
//		cout << "arr[" << i << "] = " << arr[i] << endl;
//
//	}
//
//}
//
//
//void SUM(int arr[], const int Size, int &sum) {
//
//
//	for (int i = 0; i < Size; i++) {
//		sum += arr[i];
//
//	}
//
//}
//
//void MULT(int arr[], const int Size, int &mult) {
//
//
//	for (int i = 0; i < Size; i++) {
//		mult *= arr[i];
//
//	}
//
//}
//
//
//
//int main() {
//
//	srand(unsigned(time(NULL)));
//	const int Size = 10;
//	int arr[Size];
//	int sum = 0;
//	int mult = 1;
//
//
//	FillArr(arr, Size);
//	Print(arr, Size);
//	SUM(arr, Size, sum);
//	cout << "SUM= " << sum << endl;
//	MULT(arr, Size, mult);
//	cout << "MULT= " << mult << endl;
//
//
//
//	system("pause");
//	return 0;
//}



/*-------- Task 3 (Написати шаблонні функції для роботи з двовимірними масивами різних типів.
-	Заповнення масиву   (з використанням  &)
-	Вивід масиву на екран   (з використанням  &)
-	Вивід всіх елементів на головній діагоналі на екран
-	Знаходження найбільшого елемента масиву
-	Перестановка рядків масиву
-	Очищення масиву  (Заповненя нулями)
Задачу робити з Меню. Вихід з меню по 0)--------*/



void FillArr(int arr[], const int Size1, const int Size2) {

	for (int i = 0; i < Size1; i++)
	{
		arr[i][j] = rand() % 99 + 1;
	}
}



void Print(int arr[], const int Size1, const int Size2) {
	cout << " PrintArr " << endl;

	for (int i = 0; i < Size1; i++; int j = 0; j < Size2; i++ {
		cout << "arr[" << i << "] = " << arr[i] << endl;

	}

}


//void SUM(int arr[], const int Size, int &sum) {
//
//
//	for (int i = 0; i < Size; i++) {
//		sum += arr[i];
//
//	}
//
//}
//
//void MULT(int arr[], const int Size, int &mult) {
//
//
//	for (int i = 0; i < Size; i++) {
//		mult *= arr[i];
//
//	}
//
//}



int main() {

	srand(unsigned(time(NULL)));
	const int Size1 = 3;
	const int Size2 = 11;
	int arr[Size1][Size2];
	int sum = 0;
	int mult = 1;


	FillArr(arr, Size1, Size2);
	Print(arr, Size1, Size2);
	/*SUM(arr, Size, sum);
	cout << "SUM= " << sum << endl;
	MULT(arr, Size, mult);
	cout << "MULT= " << mult << endl;*/



	system("pause");
	return 0;
}










