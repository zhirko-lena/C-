#include <iostream>
#include <ctime>

using namespace std;

void FillArr(int arr[], const int Size) {

	for (int i = 0; i < Size; i++)
	{
		arr[i] = rand() % 102 + -32;
	}
}



void Print(int arr[], const int Size) {
	cout << " PrintArr " << endl;
	for (int i = 0; i < Size; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}




//void ConCut(arr, arr1, arr2, int const int Size1, const int Size2) {
//
//
//
//}

//void sumArr(int arrA[], int arrB[], int arr[], const int SIZE) {
//	for (int i = 0; i < SIZE + SIZE; i++) arr[i] = (i < 5) ? arrA[i] : arrB[i - SIZE];
//}


void SumArr(int arr1[], int arr2[], int arr3[], const int Size) {

	for (int i = 0; i < Size * 2; i++)
	{

		if (i < Size)
		{
			arr3[i] = arr1[i];

		}
		else
		{
			arr3[i] = arr2[i - Size];

		}

	}
}

//void SumArrA(int arr1[], int arr2[], int arr3[], const int Size) {
//
//	for (int i = 0; i < Size * 2; i++)
//	{
//
//		if (arr1[i] ==arr2[i])
//		{
//			arr3[i] = arr1[i];
//
//		}
//		else
//		{
//			break;
//
//		}
//
//	}
//}

void printNO(int arrA[], int arrB[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		bool iss = false;
		for (int s = 0; s < SIZE; s++) {
			if (iss) break;
			iss = (arrA[i] == arrB[s]);
		}
		if (!iss) cout << "\n> " << arrA[i];
	}
}



int main() {

	/*int *pointer = new int;

	cout << "Address P= " << *pointer << "Value P= " << pointer << endl;
	delete pointer;*/

	srand(unsigned(time(NULL)));
	const int Size = 7;
	int arr1[Size];
	int arr2[Size];
	int arr3[Size * 2];


	FillArr(arr1, Size);
	Print(arr1, Size);
	FillArr(arr2, Size);
	Print(arr2, Size);

	SumArr(arr1, arr2, arr3, Size);
	Print(arr3, Size * 2);


	/*SumArrA(arr1, arr2, arr3, Size);
	Print(arr3, Size * 2);*/












	system("pause");
	return 0;

}



/*-------------Task 1 (Створити 3 динамічних змінних різного типу.Заповнити їх деякими значеннями.Обчислити і вивести на екран їх добуток, а також самі значення динамічних змінних)-------------------*/

int main()
{
int	*pInt = new int;
*pInt = 10;

cout<<"pInt Address= "<< 







	system ("pause");
	return 0;
}







