#include <iostream>
#include <ctime>
using namespace std;

//template<typename T, typename T2>
//void Fill(T arr[], T2 size) {
//	for (int i = 0; i < size; i++) {
//		arr[i] = rand() % 10;
//	}
//}
//
//template<typename T, typename T2>
//void Print(T arr[], T2 size) {
//	for (int i = 0; i < size; i++) {
//		cout << "arr [" << i << "]=" << arr[i] << "\t\t";
//		cout << " Address = " << arr + i << endl;
//	}
//}
//
//int main() {
//	srand(unsigned(time(NULL)));
//	//==============Block1===================
//	int size;
//	cout << "Enter arr size : " << endl;
//	cin >> size;
//
//	int *arr = new int[size];
//
//	Fill(arr, size);
//	Print(arr, size);
//
//	delete[] arr;
//
//	//==============Block1===================
//
//	system("pause");
//	return 0;
//}



template<typename T, typename T2>
void Fill(T arr[], T2 size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 77;
	}
}

template<typename T, typename T2>
void Print(T arr[], T2 size) {
	for (int i = 0; i < size; i++) {
		cout << "arr [" << i << "]=" << arr[i] << "\t\t";
		cout << " Address = " << arr + i << endl;
	}
}

template<typename T3, typename T2>
void NewEl(T3 arr1[], T2 size) {


	for (int i = 0; i < size + 1; i++) {

		cout << "arr [" << i << "]=" << arr1[i] << "\t\t";
		cout << " Address = " << arr1 + i << endl;
	}


}
template<typename T, typename T2>
void DeleteElement(T arr[], T2 size) {

	if (deletes > size || deletes < 1) {
		cout << "Enter correct number" << endl;
		return false;
	}
	else {
		for (int i = deletes - 1; i < SIZE - 1; i++) {
			Arr[i] = Arr[i + 1];
		}
		SIZE--;
		return Arr;
		cout << "Элемент успешно удален!";
	}


	for (int i = 0; i < size + 1; i++) {

		cout << "arr [" << i << "]=" << arr1[i] << "\t\t";
		cout << " Address = " << arr1 + i << endl;
	}


}





//int* InsertEllement(int* Arr, int &SIZE, int numb, int index) {
//
//	int *newArray = new int[++SIZE]; // создаем новый массив
//	for (int i = 0; i < index; ++i) // копипастим массив элементы до index
//		newArray[i] = Arr[i];
//	newArray[index] = numb;
//	for (int i = index; i < SIZE - 1; ++i) // копипастим массив после index
//		newArray[i + 1] = Arr[i];
//	delete[]Arr; // чистим прошлый массив
//	Arr = newArray;
//	return newArray;
//}







int main() {

	/*int Size = 0;
	cin >> Size;

	int *arr = new int[Size];*/

	int NewElement = 0;
	srand(unsigned(time(NULL)));
	int size;
	cout << "Enter arr size : " << endl;
	cin >> size;

	int *arr = new int[size];
	int *arr1 = new int[size + 1];


	Fill(arr, size);
	Print(arr, size);



	cout << "Enter value of new element: " << "\t\t";
	cin >> NewElement;
	arr = arr1;
	arr1[size + 1] = NewElement;

	NewEl(arr1, size);








	delete[] arr;
	delete[] arr1;






	system("pause");
	return 0;
}




//int* FillArray(int* Arr, int SIZE);
//int* PrintArray(int* Arr, int SIZE);
//int* AddElement(int* Arr, int& SIZE, int NewOne);
//int* DeletElement(int* Arr, int &SIZE, int deletes);
//int* InsertEllement(int* Arr, int SIZE, int numb, int index);
//
//int main() {
//	setlocale(LC_CTYPE, "Ukrainian");
//	srand(time(0));
//
//	int SIZE, *Arr = NULL, NewOne = 0;
//	char Menu = '1';
//	enum Meny { CreateMass = '1', FillArr = '2', PrintArr = '3', AddOne = '4', DelElement = '5', Insert = '6' };
//
//	while (Menu != '0') {
//		cout << "\t.........::Выберите операцию::.........\n";
//		cout << "\t| ___________________________________ |\n";
//		cout << "\t| [1] - Создать Массив                |\n";
//		cout << "\t| [2] - Заполнить рандомными числами  |\n";
//		cout << "\t| [3] - Вывести массив                 |\n";
//		cout << "\t| [4] - Дополнить массив               |\n";
//		cout << "\t| [5] - Удалить элемент              |\n";
//		cout << "\t| [6] - Вставить элемент              |\n";
//		cout << "\t| ___________________________________ |\n";
//		cout << "\t| [0] - Выход                         |\n";
//		cout << "\t| ___________________________________ |\n";
//		cout << endl;
//		cout << "Введите номер операции : ";
//		cin >> Menu;
//		cout << endl;
//		switch (Menu) {
//		case CreateMass:
//			cout << "Введите размер нового массиву : ";
//			cin >> SIZE;
//			Arr = new int[SIZE];
//			cout << "Массив размера " << SIZE << " успешно создан!" << endl;
//			cout << endl;
//			break;
//
//		case FillArr:
//			FillArray(Arr, SIZE);
//			cout << "Массив успешно заполнен!" << endl;
//			cout << endl;
//			break;
//		case PrintArr:
//			PrintArray(Arr, SIZE);
//			cout << endl;
//			break;
//		case AddOne:
//			cout << "Введите число для вставки : ";
//			cin >> NewOne;
//			Arr = AddElement(Arr, SIZE, NewOne);
//			cout << endl;
//			break;
//		case DelElement:
//			int deletes;
//			cout << "Введите index числа которое хотите удалить : ";
//			cin >> deletes;
//			Arr = DeletElement(Arr, SIZE, deletes);
//			cout << "Элемент успешно удален!";
//			cout << endl;
//			break;
//		case Insert:
//			int numb, index;
//			cout << "Введите число : ";
//			cin >> numb;
//			cout << "Введите индекс : ";
//			cin >> index;
//			Arr = InsertEllement(Arr, SIZE, numb, index);
//			cout << endl;
//		}
//
//	}
//}
//
//int* FillArray(int* Arr, int SIZE) {
//	int* tMas = Arr;
//
//	for (tMas = Arr; tMas < (Arr + SIZE); tMas++) {
//		*tMas = rand() % 10;
//	}
//
//	return Arr;
//}
//int* PrintArray(int* Arr, int SIZE) {
//	int* tMas = Arr;
//	for (; tMas < (Arr + SIZE); tMas++) {
//		cout << *tMas << "  ";
//	}
//	return Arr;
//}
//int* AddElement(int* Arr, int& SIZE, int NewOne) {
//	int* tmp = new int[SIZE + 1];
//	for (int i = 0; i <= SIZE; i++) {
//		if (i < SIZE) {
//			tmp[i] = Arr[i];
//		}
//		if (i == SIZE) {
//			tmp[i] = NewOne;
//		}
//	}
//
//	delete[] Arr;
//	Arr = NULL;
//	SIZE++;
//	return tmp;
//
//}
//
//int* DeletElement(int* Arr, int &SIZE, int deletes) {
//	if (deletes > SIZE || deletes < 1) {
//		cout << "Ошибка удаления" << endl;
//		return false;
//	}
//	else {
//		for (int i = deletes - 1; i < SIZE - 1; i++) {
//			Arr[i] = Arr[i + 1];
//		}
//		SIZE--;
//		return Arr;
//		cout << "Элемент успешно удален!";
//	}
//}
//
//int* InsertEllement(int* Arr, int SIZE, int numb, int index) {
//
//	int* tmp1 = new int[SIZE + 1];
//
//	for (int i = index; i < SIZE - 1; ++i) {
//		Arr[i + 1] = Arr[i];
//		if (i == index) {
//			Arr[index] = numb;
//		}
//	}
//
//	delete[] Arr;
//	Arr = NULL;
//	SIZE++;
//	return tmp1;
//}