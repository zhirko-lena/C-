#include "Arr.h"
#include <ctime>
#include <iostream>
using namespace std;


void Print(int *const arr, int const size) {
		for (int i = 0; i < size; i++) {
		cout << "Arr [" << i << "]= " << arr[i] << endl;
	}
}