#include <iostream>
#include <string>
#include <ctime>
#include "sum.h"
#include "mult.h"
#include "Person.h"
#include "Arr.h"

using namespace std;





int main() {

	/*cout << sum(2, 8) << endl;
	cout << mult(4, 4) << endl;
	Person Bill;
	Bill.name = "Bill";
	Bill.surname = "Gates";
	Bill.age = 59;
	Bill.ShowPerson();*/

	srand(unsigned(time(NULL)));
	int size = 0;
	cout << "Enter arr size: " << endl;
	cin >> size;
	int *arr = new int[size];
	

	Fill(arr, size);
	Print(arr, size);
	NewEl(arr, size);
	








	delete[]arr;








	system("pause");
	return 0;
}