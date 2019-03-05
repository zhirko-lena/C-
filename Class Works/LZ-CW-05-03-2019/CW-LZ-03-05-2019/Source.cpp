/*#include <iostream>
#include <ctime>
using namespace std;

void Fill(int *arr, int size) {

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << "Arr [" << i << "]= " << arr[i] << "\t" << "Address = " << arr + i << endl;
	}
}


int main() {

	srand(unsigned(time(NULL)));

	//========Block1============
	int size = 0;

	cout << "Enter arr size" << endl;
	cin >> size;
	int *arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << "Arr [" << i << "]= " << arr[i] << "\t" << "Address = " << arr + i << endl;
	}

	delete[] arr;


	int size = 0;

	cout << "Enter arr size" << endl;
	cin >> size;
	int *arr = new int[size];
	Fill(arr, size);

	system("pause");
	return 0;
}*/

/*# include <iostream>
# include <ctime>

using namespace std;

void Fill(int *const arr, int const size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
}

void Print(int *const arr, int const size) {
	cout << " arr address " << arr << endl;
	for (int i = 0; i < size; i++) {
		cout << "Arr [" << i << "]= " << arr[i] << "\t" << " Address = " << arr + i << endl;
	}
}

void Push(int *&arr, int size) {
	int elem = 0;
	cout << "Enter new element " << endl;
	cin >> elem;
	int *tmpArr = new int[size + 1];
	cout << "rmpArr address = " << tmpArr << endl;
	for (int i = 0; i < size; i++) {
		tmpArr[i] = arr[i];
	}
	tmpArr[size] = elem;

	delete[]arr;
	arr = tmpArr;
}

int main() {
	srand(unsigned(time(NULL)));
	//===============Block1====================>
	/*int size = 0;
	cout << "Enter arr size: " << endl;
	cin >> size;
	int *arr = new int[size];
	for (int i = 0; i < size; i++) {
	arr[i] = rand() % 10;
	cout << "Arr [" << i << "]= " << arr[i] << "\t" << " Address = " << arr + i << endl;
	}
	delete[] arr;*/
	//===============Block1====================>
	//===============Block2====================>
	/*int size = 0;
	cout << "Enter arr size: " << endl;
	cin >> size;
	int *arr = new int[size];
	cout << " arr address " << arr << endl;
	Fill(arr, size);
	Print(arr, size);
	delete[]arr;
	//===============Block2====================>
	//===============Block3====================>
	int size = 5;
	int *arr1 = new int[size];
	int *arr2 = new int[size];

	Fill(arr1, size);
	Fill(arr2, size);
	cout << "=========Arr1=============" << endl;
	Print(arr1, size);
	cout << "=========Arr2=============" << endl;
	Print(arr2, size);

	delete[] arr1;
	arr1 = new int[size];

	for (int i = 0; i < size; i++) {
	arr1[i] = arr2[i];
	}

	cout << "=========Arr1====After=========" << endl;
	Print(arr1, size);
	cout << "=========Arr2====After=========" << endl;
	Print(arr2, size);

	delete[] arr1;
	delete[] arr2;
	//===============Block3====================>
	//===============Block4====================>
	int size = 0;
	cout << "Enter arr size: " << endl;
	cin >> size;
	int *arr = new int[size];
	Fill(arr, size);
	Print(arr, size);*/


#include <iostream>
#include <ctime>
using namespace std;







int main() {

	/*srand(unsigned(time(NULL)));*/

	int Menu;
	while (Menu != 0) {
		cout << "\t.........::Choose Action::.........\n";
		cout << "\t| ___________________________________ |\n";
		cout << "\t| [1] - Create and fill array with random numbers            |\n";
		cout << "\t| [2] - Print array  |\n";
		cout << "\t| [3] - Plus 1 element at the end               |\n";
		cout << "\t| [4] - Plus 1 element at the begining             |\n";
		cout << "\t| [5] - To delete element by position              |\n";
		cout << "\t| ___________________________________ |\n";
		cout << "\t| [0] - Exit                         |\n";
		cout << "\t| ___________________________________ |\n";
		cout << endl;
		cout << "Enter number of action: " << endl;
		cin >> Menu;
		cout << endl;
		if (Menu = 1) {
			Fill(arr, size);
		}
		else if (Menu = 2) {
			Print(arr, size);
		}
		else if (Menu = 3) {
			AddLast(arr, size);
		}
		else if (Menu = 4) {
			AddFirst(arr, size);

		}
		else if (Menu = 5) {


		}
		else {
			cout << "Enter correct number" << endl;
		}


	}


	system("pause");
	return 0;
}