#include <iostream>
#include <ctime>
using namespace std;

/*int main() {
	srand(unsigned(time(NULL)));

	int cols = 0;
	int rows = 0;

	cout << "Enter Rows: " << endl;
	cin >> rows;
	cout << "Enter Cols: " << endl;
	cin >> cols;


	int **arr = new int *[rows];

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}


	for (int i = 0; i < rows; i++) {
		delete[]arr[i];
	}


	delete[]arr;

	system("pause");
	return 0;
}*/

void Fill(int **&arr, int cols, int rows) {
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 10;
		}
	}

}

void Print(int **&arr, int cols, int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

}


void Push(int**&arr, int rows, int cols)
{
	cout << "\t\tAdded new row" << endl;
	int s = 1;
	int **tmpArr = new int*[rows + 1];
	for (int i = 0; i < rows + 1; i++)
		tmpArr[i] = new int[cols];

	for (int i = 0; i < cols; i++)
	{
		tmpArr[0][i] = rand() % 10;
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			tmpArr[s][j] = arr[i][j];
		}
		s++;
	}

	for (int i = 0; i < rows; i++)
		delete[]arr[i];
	delete[]arr;
	arr = tmpArr;

}

void Delete(int**&arr, int rows, int cols) {
	int R = 0;
	cout << "Enter number of the row u want to delete: " << endl;
	cin >> R;

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 10;
		}
	}







}




int main()
{
	srand(unsigned(time(NULL)));
	int cols = 0;
	int rows = 0;

	cout << "Enter Rows: " << endl;
	cin >> rows;
	cout << "Enter Cols: " << endl;
	cin >> cols;

	int **arr = new int *[rows];

	Fill(arr, cols, rows);
	Print(arr, rows, cols);
	Push(arr, rows, cols);
	Print(arr, rows, cols);
	Delete(arr, rows, cols);
	Print(arr, rows, cols);







	for (int i = 0; i < rows; i++) {
		delete[]arr[i];
	}


	delete[]arr;












	system("pause");
	return 0;
}









