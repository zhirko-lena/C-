#include <ctime>
#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	/*int L = 0, H = 0;
	cout << "Enter dimensions of rectangular: \nL=";
	cin >> L;
	cout << "H=";
	cin >> H;
	for (int i = 0; i< H; i++)
	{
		cout << "*";

		for (int j = 0; j < L; j++)
		{
			if (j==0||j==L||i==0||i==H)
			{
				cout << "*";
			}
			else {
				cout << "";
			}
		}

		cout << endl;

	}*/


	/*int x, y;
	cin >> x;
	cin >> y;

	for (int i = 0; i <= x; i++)
	{
		for (int a = 0; a <= y; a++)
		{
			if (i == 0 || i == x || a == 0 || a == y) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}*/




	/*--------------------------------Task 1-------------------------------*/

	/*int L = 0, H = 0;
	cout << "Enter dimensions of triangle: \nH=";
	cin >> H;
	cout << "L=";
	cin >> L;
	for (int i = 0; i < H; i++)
	{
		cout << "*";

		for (int j = 0; j < L; j++)
		{
			if (i == 0 || j >= i)
			{

				cout << "";
			}
			else
			{
				cout << "*";
			}

		}

		if (H > L)
		{
			break;
		}


		cout << endl;
	}*/

	/*---------------------------------Task 2------------------------------------*/

	int L = 0, H = 0, a=0, b=0, c=0;
	cout << "Enter dimensions of triangle: \nH=";
	cin >> H;
	cout << "L=";
	cin >> L;
	for (int i = 0; i < H; i++)
	{
		cout << "*";

		for (int j = 0; j < L; j++)
		{
			a = i / 2 + 1;

			
			if (i == 0 || j >= i)
			{

				cout << "*";
			}
			else
			{
				cout << "";
			}

		}

		if (H > L)
		{
			break;
		}


		cout << endl;
	}














	system("pause");
	return 0;
}