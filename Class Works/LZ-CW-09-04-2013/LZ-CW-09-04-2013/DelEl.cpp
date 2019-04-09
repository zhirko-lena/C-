#include "Arr.h"
#include <ctime>
#include <iostream>
using namespace std;

void DelEl(int *const arr, int const size) {

	cout << "Enter position of element u want to delete: " << endl;
	int pos;
	cin >> pos;
	int number2 = size - 1;
	int *NewArr2 = new int[number2];
	
	for (int i = 0; i < number2; i++) {

		if (i == pos) {

		}
		NewArr2[i] = arr[i];
		cout << "Arr [" << i << "]= " << NewArr2[i] << endl;
	}

}