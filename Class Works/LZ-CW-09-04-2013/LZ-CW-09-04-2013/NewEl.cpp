#include "Arr.h"
#include <ctime>
#include <iostream>
using namespace std;

void NewEl(int *const arr, int const size) {

	cout << "Enter new element: " << endl;
	int NewEl;
	cin >> NewEl;
	int number = size + 1;
	int *NewArr = new int[number];
	NewArr[number] = NewEl;

	for (int i = 0; i < number; i++) {

		NewArr[i] = arr[i];
		cout << "Arr [" << i << "]= " << NewArr[i] << endl;
	}
	
}
