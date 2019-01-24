#include <iostream>
using namespace std;
int main()
{

	//int i = 0;
	//	while (i < 10)
	//	{
	//		cout << "Hello, World!" << endl;
	//	}


	//int iterator=0;
	//while (iterator < 10)
	//	{
	//	iterator++;
	//	cout << iterator << endl;
	//
	//	}


		/*int i = 0;
		do
		{
			cout << "Hello, DO WHILE!" << endl;

			i++;


		} while (i < 10);*/


		/*int i = 20;
		do
		{
			cout << "Hello, DO WHILE!" << endl;

			i++;


		} while (i < 10);*/

		/*int i = 0;
		int sum = 0;
		while (i < 10)
		{
			i++;
				if (i%2==0)
				{
				sum += i;


			}

		}
		cout << sum << endl;*/


		/*int iterator = 0;
		while (iterator < 100)
			{
			iterator++;
			cout << iterator << endl;

			}*/

			//int N=0, sum = 0, i=0, numbers=0;
			//cout << "Enter count of N" << endl;
			//cin >> N;
			//	
			//while (i < N)
			//{
			//	i++;
			//	cout<<"Enter number "<<i<<endl;
			//	cin >> numbers;
			//	if (numbers % 2 == 0)
			//	{
			//		sum +=numbers;
			//	}
			//}
			//cout << sum << endl;




	/*int N = 10, sum = 0, i = 0, numbers = 0;
	while (i < N)
	{
		i++;
		cout << "Enter number " << i << endl;
		cin >> numbers;

		sum += numbers;

	}
	cout << sum << endl;
	cout << sum / N << endl;*/


	/*int i = 100;
	do
	{

		cout << i << endl;
		i--;

	} while (i>0);*/


	//int N = 7, sum = 0, i = 0, numbers = 0;
	//do
	//{
	//	i++;
	//	cout << "Enter number " << i << endl;
	//	cin >> numbers;
	//
	//	sum += numbers;
	//
	//} while (i<N);
	//cout << sum << endl;


	//int i = 13;
	//while (i<123)
	//{
	//	i++;
	//	cout << i << endl;
	//	
	//}


	/*int N = 0, i = 0, number = 0;
	cout << "Enter count of N" << endl;
	cin >> N;

	while (i < N)
	{
		i++;
		cout << "Enter number " << i << endl;
		cin >> number;
		if (number < 0)
		{
			cout << N << endl;
		}
	}*/



	//int N = 8, mult = 1, i = 0, number = 0, sum = 0;
	//mult = number;
	//while (i < N)
	//{
	//	i++;
	//	cout << "Enter number " << i << endl;
	//	cin >> number;

	//	mult =mult* number;
	//	sum += number;

	//}
	//cout << mult << endl;
	//cout << sum / N << endl;



	/*int inter = 0;
	int input, sum = 0, sum2 = 0;
	cout << ">>";
	cin >> input;
	sum2 = input;

	while (inter < 7)
	{
		sum += input;
		sum2 = sum2 * input;
		cout << ">>";
		cin >> input;
		inter++;
	}
	cout << sum << endl << sum2 << endl;*/


	int i = 0, number = 0, a = 0, b = 0, c = 0, d = 0;
	cout << "Enter a,b,c,d " << endl;
	while (i < 4)
	{
		i++;
		cin >> a >> b >> c >> d;
		if (a < b)
		{
			while (a < b)
			{
				a++;
					if (a % 2 = 0)
					{
						cout << "парні: " << a << endl;
					}
				if (a % 2 != 0)
				{
					cout << "непарні: " << a << endl;

				}
				if (a % 7 == 0)
				{
					cout << "кратні 7: " << a << endl;

				}


			}
			if (b < a)
			{
				while (b < a)
				{
					b++;
					if (b % 2 = 0)
					{
						cout << "парні: " << b << endl;
					}
					if (b % 2 != 0)
					{
						cout << "непарні: " << b << endl;

					}
					if (b % 7 == 0)
					{
						cout << "кратні 7: " << b << endl;

					}


				}


		}


	}

























	system("pause");
	return 0;
}