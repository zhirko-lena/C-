#include "Arr.h"
#include <ctime>
#include <iostream>


void Fill(int *const arr, int const size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 30;
	}
}
