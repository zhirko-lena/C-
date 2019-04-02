#include <iostream>
#include <ctime>
#include <string>

#define week 7
#define space "\t"
#define sum(a,b)((a)+(b))
#define DEBUG
#define PROD 7
#define AVG(a,b,c)((a)>(b)?(a):(b)&&(b)>(c)?(b):(c)&&(a)>(c)?(a):(c))
#define sumSQ(a,b)((a)*(a)+(b)*(b))
#define size 10


using namespace std;

/*union Test {
	short a;
	int b;
	double c;

};


int main() {
	Test un;
	un.a = 49;
	un.b = 200;
	un.c = 404;

	system("pause");
	return 0;
}*/

void FillArr(int arr[], const int size) {
	srand(unsigned(time(NULL)));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 32 + -12;
	}
}

void Print(int arr[], const int size) {
	cout << " PrintArr " << endl;
	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

void SumArr(int arr[], const int size) {
	cout << " SumArr= " << endl;
	for (int i = 0; i < size; i++) {
		arr[0] += arr[i];
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}



int main() {

	/*cout << week << endl;
	cout << "shfghh" << space << "fghfgh" << endl;
	cout << sum(5, 15) << endl;

#ifdef DEBUG
	cout << "Start loop" << endl;

	for (int i = 0; i < 5; i++) {
		cout << i << endl;
	}

#else
	cout << "End loop" << endl;
#endif*/


/*#if PROD == 1
	cout << "Stable" << endl;

#elif PROD == 2
	cout << "Test" << endl;
#else
	cout << "else" << endl;
#endif*/

/*cout << AVG(35, 67, 99) << endl;
cout << sumSQ(5, 3) << endl;*/

	srand(unsigned(time(NULL)));
	int arr[size];

	FillArr(arr, size);
	Print(arr, size);
	SumArr(arr, size);








	system("pause");
	return 0;
}
