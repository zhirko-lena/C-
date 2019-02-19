#include <iostream>
#include <ctime>

using namespace std;




void FVAL(int a) {
	cout << "FVAL A Value = " << a << "; A address=" << &a << endl;
	a += 100;
	cout << "FVAL A Value = " << a << "; A address=" << &a << endl;
}

void FREF(int &a) {
	cout << "FREF A Value = " << a << "; A address=" << &a << endl;
	a += 300;
	cout << "FREF A Value = " << a << "; A address=" << &a << endl;
}



int main()
{
	int a = 10;
	cout << "A Value = " << a << "; A address=" << &a << endl;
	int &Ra = a;
	//cout << Ra << &Ra << endl;
	int *P;
	//int &R;

	FVAL(a);
	cout << "A Value = " << a << "; A address=" << &a << endl;

	FREF(Ra);
	cout << "A Value = " << a << "; A address=" << &a << endl;




	system("pause");
	return 0;
}