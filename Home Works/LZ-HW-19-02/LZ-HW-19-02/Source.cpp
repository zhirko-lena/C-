#include <iostream>
#include <ctime>

using namespace std;


/*-----------------Task 1-------------------------*/

void FillArr(int arr[], const int Size) {

	for (int i = 0; i < Size; i++)
	{
		arr[i] = rand() % 32 + -12;
	}
}

void Print(int arr[], const int Size) {
	cout << " PrintArr " << endl;
	for (int i = 0; i < Size; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	
	cout << " PrintArr backwords " << endl;
	for (int i = Size; i <= 0; i--) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}

}



int main()
{
	srand(unsigned(time(NULL)));
	const int SIZE = 7;
	int arr1[SIZE];
	int arr2[SIZE];
	FillArr(arr1, SIZE);
	Print(arr1, SIZE);
	FillArr(arr2, SIZE);
	Print(arr2, SIZE);










	system("pause");
	return 0;

}