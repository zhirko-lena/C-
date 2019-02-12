//#include <iostream>
//#include <ctime>
// 
//using namespace std;
//
//
//
//int main()
//{
//	/*int a = 5;*/
//	int a = 5;
//	int *pointerA = &a;
//
//	cout << "Value a=" << a <<"; Address a ="<<&a<< "; Value PointerA="<< *pointerA<<"; Address pointerA="<<pointerA<<endl;
//	*pointerA = 100500;
//	cout << "Value a=" << a << "; Address a =" << &a << "; Value PointerA=" << *pointerA << "; Address pointerA=" << pointerA << endl;
//
//	int *pointerBackup = pointerA;
//
//	cout << "Value pointerBackup=" << pointerBackup << "; Address pointerBackup =" << &pointerBackup << "; Value ppointerAp=" << *pointerA << "; Address pointerA=" << pointerA << endl;
//
//	system("pause");
//	return 0;
//}

//# include <iostream>
//
//using namespace std;
//
//int main() {
//
//	/*int a = 5, b = 10;
//
//	cout << "a = " << a << " Address = " << &a << endl;
//	cout << "b = " << b << " Address = " << &b << endl;
//
//	int *pointerA;
//	pointerA = &a;
//
//	cout << "Address a = " << &a << " pointerA = " << pointerA << endl;
//	cout << "Value a = " << a << " Value pointerA = " << *pointerA << endl;
//
//	*pointerA = 100500;
//	cout << "Value a = " << a << " Value pointerA = " << *pointerA << endl;
//
//	int *pointerBackup = &a;
//	cout << "Address a = " << &a << " pointerBackup = " << pointerBackup << endl;
//	cout << "Value a = " << a << " pointerBackup = " << *pointerBackup << endl;*/
//
//
//	const int SIZE = 5;
//	int arr[SIZE] = { 3,7,9,1,5 };
//
//	for (int i = 0; i < SIZE; i++) {
//		cout << arr[i] << endl;
//	}
//	cout << "arr = " << arr << endl;
//
//	int *pointerArr = arr;
//	for (int i = 0; i < SIZE; i++) {
//		cout << pointerArr[i] << endl;
//	}
//	cout << "arr = " << arr << " pointerArr = " << pointerArr << endl;
//
//	cout << "Second element pointer " << *(arr + 1) << endl;
//	cout << "Second element  default " << arr[1] << endl;
//
//
//	//==============Адреси елементів масиву
//	for (int i = 0; i < SIZE; i++) {
//		cout << "arr[ " << i << "] = " << (arr + i) << endl;
//	}
//
//	system("pause");
//	return 0;
//}


/*-----Дано три числа. Оголосити вказівники на ці числа. Отримати добуток трьох заданих чисел, середє арифметичне, найменше з них, користуючись непрямим доступом до чисел (через вказівники).-----*/

/*# include <iostream>

using namespace std;

int main() {

	int A = 6, B = 7, C = 8;

	int *pointerA;
	int *pointerB;
	int *pointerC;

	pointerA = &A;
	pointerB = &B;
	pointerC = &C;

	cout << "Mult=A*B*C="<< *pointerA * *pointerB * *pointerC<<endl;

	cout << "Avarage=(A+B+C)/3=" << (*pointerA + *pointerB + *pointerC)/3 << endl;

	if (A < B && A < C)
	{
	}



	system("pause");
	return 0;
}*/


# include <iostream>

using namespace std;


int const Marks = 12;
int Class = 5;

int main() {

	int arrMath[Marks] = {12,6,8,8,5,8,7,11,10,9,12,11};
	int arrLang[Marks] = {11,7,5,9,5,8,7,11,10,9,11,10};
	int arrPhys[Marks] = {10,7,1,9,5,8,2,11,10,9,10,9};
	int arrCham[Marks] = {9,7,9,9,8,8,7,11,10,9,10,7};
	int arrHist[Marks] = {8,7,5,9,5,8,7,11,11,9,11,5};
	int arrBiol[Marks] = {6,7,4,9,5,11,7,11,10,9,12,12};

	   	



	system("pause");
	return 0;
}


int Avarage(int arr[], const int Size)
{
	arr


}

