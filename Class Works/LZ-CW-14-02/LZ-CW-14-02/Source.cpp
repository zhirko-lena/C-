#include <iostream>
#include <ctime>

using namespace std;

//void PrintA(int a) {
//
//
//	a++;
//		cout << "Print a Value" << a << endl;
//		cout << "Print a Address" << &a << endl;
//
//}
//void PrintB(int *PointerB) {
//
//
//	(*PointerB)++;
//		cout << "Print b Value" << *PointerB << endl;
//		cout << "Print b Address" << PointerB << endl;
//
//}


//int main()
//{
//
//	/*int a = 5;
//	cout << "Print a Value" << a << endl;
//	cout << "Print a Address" << &a << endl; 
//	PrintA(a);
//
//	
//	cout << "Print a Value" << a << endl;
//	cout << "Print a Address" << &a << endl;
//	*/
//	int b = 50;
//	cout << "Print b Value" << b << endl;
//	cout << "Print b Address" << &b << endl; 
//	PrintB(&b);
//
//	
//	cout << "Print b Value" << b << endl;
//	cout << "Print b Address" << &b << endl;
//
//
//
//	system("pause");
//	return 0;
//}


//----------------------1.  Используя указатели и оператор разыменования, определить наибольшее из двух чисел.------------------------


//int main()
//{
//	int l = 11;
//	int *PointerL = &l;
//	int z = 7;
//	int *PointerZ = &z;
//
//	if (*PointerL > *PointerZ) {
//		cout << "l is bigger than z: " << *PointerL << " > " << *PointerZ << endl;
//	}
//
//	else if (*PointerL < *PointerZ) {
//		cout << "z is bigger than l: " << *PointerZ << " > " << *PointerL << endl;
//	}
//
//	else
//	{
//		cout << "z and l are equal: " << *PointerZ << " = " << *PointerL << endl;
//	}
//	   	   
//
//
//	system("pause");
//	return 0;
//}


//----------------------2. Используя указатели и оператор разыменования, обменять местами значения двух переменных------------------------



//{
//	void Switch(int *pA, int *pB) {
//		cout << "pA value = " << *pA << " pB value = " << *pB << endl;
//		cout << "pa address = " << pA << " pB address = " << pB << endl;
//		cout << "====================================>" << endl;
//
//		int pTMP = *pA;
//
//		cout << "====================================>" << endl;
//
//		*pA = *pB;
//		*pB = pTMP;
//
//	}
//
//	int main() {
//		srand(unsigned(time(NULL)));
//		/*int a = rand() % 100, b = rand() % 100;*/
//
//		/*int *pA = &a;
//		int *pB = &b;
//
//		cout << "A value = " << a << " B value = " << b << endl;
//		cout << "A address = " << &a << " B address = " << &b << endl;
//		cout << "====================================>" << endl;
//
//		cout << "pA value = " << *pA << " pB value = " << *pB << endl;
//		cout << "pa address = " << pA << " pB address = " << pB << endl;
//		cout << "====================================>" << endl;
//
//		if (*pA > *pB) {
//		cout << "A > B" << endl;
//		}
//		else if (*pA < *pB) {
//		cout << "A < B" << endl;
//		}
//		else {
//		cout << "A = B" << endl;
//		}*/
//
//		cout << "=====================Task 2 ==================>" << endl;
//
//		int a = rand() % 100, b = rand() % 100;
//
//		cout << "A value = " << a << " B value = " << b << endl;
//		cout << "A address = " << &a << " B address = " << &b << endl;
//		cout << "====================================>" << endl;
//
//		Switch(&a, &b);
//
//		cout << "After Switch " << endl;
//		cout << "A value = " << a << " B value = " << b << endl;
//		cout << "A address = " << &a << " B address = " << &b << endl;
//		cout << "====================================>" << endl;
//	   	   
//
//
//	system("pause");
//	return 0;
//}

//------------------------3.  Написать примитивный калькулятор, пользуясь только указателями--------------------

//int main()
//{
//	int a, b, c;
//	cout << "Enter 1st number ==> ";
//	cin >> a;
//	cout << "Choose an operator and enter a code (1: +, 2: -, 3: /, 4: * ) ==> ";
//	cin >> c;
//	cout << "Enter 2nd number ==> ";
//	cin >> b;
//
//	int *PointerA = &a;
//	int *PointerB = &b;
//	int *PointerC = &c;
//
//	if (c == 1) {
//		cout << *PointerA << " + " << *PointerB << " = " << *PointerA + *PointerB << endl;
//	}
//	else if (c == 2) {
//		cout << *PointerA << " - " << *PointerB << " = " << *PointerA - *PointerB << endl;
//	}
//
//	else if (c == 3) {
//		cout << *PointerA << " / " << *PointerB << " = " << *PointerA / *PointerB << endl;
//	}
//	else if (c == 4) {
//		cout << *PointerA << " * " << *PointerB << " = " << *PointerA * *PointerB << endl;
//	}
//	else {
//		cout << "Incorrect code of operator" << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}

//--------------------- Сгенерировать десять массивов из случайных чисел.Вывести их и сумму их элементов на экран.Найти среди них один с максимальной суммой элементов.
//Указать какой он по счету, повторно вывести этот массив и сумму его элементов.Заполнение массива и подсчет суммы его элементов оформить в виде отдельной функции.---------------------------


//void FillArr(int arr[], const int Size);
//void Print(int arr[], const int Size);

int main()
{
	const int Size = 7;
	int arr1[Size];
	int arr1[Size];
	int arr1[Size];
	int arr1[Size];
	int arr1[Size];
	int arr1[Size];
	int arr1[Size];
	int arr1[Size];
	int arr1[Size];
	int arr1[Size];
	int arr1[Size];


	srand(unsigned(time(NULL)));
	for (int i = 0; i < Size; i++)
	{
		arr[i] = rand() % 333;
	}

	for (int i = 0; i < Size; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}




	/*FillArr(arr, SIZE);
	Print(arr, SIZE);*/


	system("pause");
	return 0;
}



//void FillArr(int arr[], const int Size) {
//srand(unsigned(time(NULL)));
//for (int i = 0; i < Size; i++)
//{
//	arr[i] = rand() % 333;
//}
//}
//
//
//void Print(int arr[], const int Size) {
//	cout << " PrintArr " << endl;
//	for (int i = 0; i < Size; i++) {
//		cout << "arr[" << i << "] = " << arr[i] << endl;
//	}
//}






