#include <iostream>
#include <ctime>

using namespace std;




//void FVAL(int a) {
//	cout << "FVAL A Value = " << a << "; A address=" << &a << endl;
//	a += 100;
//	cout << "FVAL A Value = " << a << "; A address=" << &a << endl;
//}
//
//void FREF(int &a) {
//	cout << "FREF A Value = " << a << "; A address=" << &a << endl;
//	a += 300;
//	cout << "FREF A Value = " << a << "; A address=" << &a << endl;
//}
//
//void FPTR(int *a) {
//cout << "FPTR BEFORE a  value: " << *a << " : a addr : " << a << endl;
//*a += 500;
//cout << "FPTR AFTER a  value: " << *a << " : a addr : " << a << endl;
//}
//
//int main()
//{
//	int a = 10;
//	cout << "A Value = " << a << "; A address=" << &a << endl;
//	int &Ra = a;
//	//cout << Ra << &Ra << endl;
//	int *P;
//	//int &R;
//
//	FVAL(a);
//	cout << "A Value = " << a << "; A address=" << &a << endl;
//
//	FREF(a); //FREF(Ra);
//	cout << "A Value = " << a << "; A address=" << &a << endl;

//FPTR(&a);

//cout << "A Value = " << a << "; A address=" << &a << endl;
//
//
//	system("pause");
//	return 0;
//}


//------------------ - Task 1 (Написати функцію, яка приймає вказівник на змінну і записує в неї результат множення на  самоу себе.)--------------------

//void FPTR(int *L) {
//	cout << "FPTR BEFORE L value: " << *L << " : L addr : " << L << endl;
//	*L = *L * *L;
//	cout << "FPTR AFTER L value: " << *L << " : L addr : " << L << endl;
//}
//
//
//
//int main()
//{
//	int L = 100;
//
//	FPTR(&L);
//
//	cout << "L*L Value = " << L << "; L address=" << &L << endl;
//
//
//	system("pause");
//	return 0;
//}


/*------------------------Task 2 (Дано три числа.Оголосити посилання на ці числа.Отримати добуток трьох заданих чисел, середнє арифметичне, найменше з них,
	користуючись непрямим доступом до чисел(через посилання).---------------------*/

	//void FREF(int &L, int &M, int &N) {
	//	int mult = 0, avarage = 0, min = 0;
	//	cout << "FPTR BEFORE L, M, N value: " << L << ", " << M << ", " << N << " : L, M, N addr : " << &L << ", " << &M << ", " << &N << endl;
	//	mult = L * M*N;
	//	avarage = (L + M + N) / 3;
	//
	//	if (L < M && L < N) {
	//		min = L;
	//	}
	//	else if (M < L && M < N) {
	//		min = L;
	//	}
	//	else if (N < M && N < L) {
	//		min = N;
	//	}
	//
	//	cout << "L*M*N= " << mult << endl;
	//	cout << "(L*M*N)/3= " << avarage << endl;
	//	cout << "MIN number= " << min << endl;
	//
	//}
	//
	//
	//
	//int main()
	//{
	//	int mult = 0, avarage = 0, min = 0;
	//	int L = 100, M = 200, N = 300;
	//	int &RL = L;
	//	int &RM = M;
	//	int &RN = N;
	//
	//
	//	FREF(RL, RM, RN);
	//
	//	
	//	system("pause");
	//	return 0;
	//}


/*------------------------Task 3 (Дано два масиви, впорядковати їх по зростанню. Сформуйте масив який складається з елементів масивів А і В,
впорядкованих по зростанню і виводить адреси елеиентів масиву).---------------------*/


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
}


int main() {
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
















