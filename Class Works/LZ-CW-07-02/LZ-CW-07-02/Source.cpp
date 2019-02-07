#include <iostream>
#include <ctime>

using namespace std;


//int i = 0;
//void func()
//{
//	i++;
//	cout << "func = " << i << endl;
//	func();
//}


//void func(int counter=10)
//{
//	counter--;
//	if (counter >= 0) {
//		cout << "func =" << counter<<endl;
//		func(counter);
//	}
//}


//int func(int counter=10)
//{
//		if (counter <= 0) {
//		return 0;
//	}
//
//		cout << "func =" << counter << endl;
//	counter--;
//	return func(counter);
//}


//------------------Написати функцію, яка рекурсивно обчислює суму чисел в переданому діапазоні -----------------------------

//int i = 1;
//int Sum(int a = 20, int b = 30, int sum = 0)
//{
//
//	if (b == a) {
//
//		return sum;
//	}
//
//	cout << "sum" << i++ << " =" << a + b << endl;
//	/*a--;
//	b--;*/
//	return Sum(a+1, b, sum + a);
//}
//
//int main()
//{
//
//	/*func();*/
//
//	int a = 0, b = 0;
//
//	cout << "Enter start range = " << endl;
//	cin >> a;
//	cout << "Enter end range = " << endl;
//	cin >> b;
//
//	int rezult = Sum(a, b);
//	cout << "a and b range  = " << rezult << endl;
//
//	//sumFib();
//
//	system("pause");
//	return 0;
//}

//------------------Написати програму для виводу на екран чисел Фібоначчі : (1, 1, 2, 3, 5, 8...xn = xn - 1 + xn - 2), менших заданого числа Q.--------------

//int fib(int x) {
//	if (x == 1 || x == 2)
//		return 1;
//	else
//		return (fib(x - 1) + fib(x - 2));
//}





int main()
{

	/*func();*/

	int a = 0, b = 0;

	cout << "Enter start range = " << endl;
	cin >> a;
	cout << "Enter end range = " << endl;
	cin >> b;

	int rezult = Sum(a, b);
	cout << "a and b range  = " << rezult << endl;

	//sumFib();

	system("pause");
	return 0;
}