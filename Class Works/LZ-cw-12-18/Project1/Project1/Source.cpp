#include <ctime>
#include <iostream>
#include <Windows.h>

using namespace std;
int main()
{

	srand(unsigned(time(NULL)));
	/*int arr[5];
	arr[0] = 1;




	const int SIZE = 12;
	int arr2[SIZE] = {2,3,56,234,75,34};*/

	/*const int SIZE=10;
	int arr3[SIZE];
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter array " << i + 1 << " element: "<<endl;
		cin >> arr3[i];

	}for (int j = 0; j < SIZE; j++)
	{
			
		sum += arr3[j];
	}

	cout << "Arr sum= " << sum << endl;*/



/*-------------------------------Task 2-------------------------------*/

	/*int oneCounter=0, twoCounter=0;
	int arr[7];
	
	for (int i=0; i<7; i++)
	{
		arr[i] = rand() % 50 + -12;
		cout << "a" << i + 1 <<"="<< arr[i]<<endl;

		if (arr[i] >=0)
		{
			oneCounter++;

		}
		else if (arr[i] < 0)
		{
			twoCounter++;

		}


	}

	cout << "dodatnih: " << oneCounter << endl;

	cout << "vid'emnuh: " << twoCounter << endl;*/


	/*-------------------------------Task 3-------------------------------*/

	/*const int SIZE = 7;
	int arr[SIZE];
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter array " << i + 1 << " element: " << endl;
		cin >> arr[i];

		if (arr[i]%2==0)
		{
			sum += arr[i];
		}

			   	}

	cout << "syma parnuh= " << sum << endl;*/
	

	/*-------------------------------Task 4-------------------------------*/
	
	const int SIZE = 30;
	int arr[SIZE];
		for (int i = 0; i < SIZE; i++)
	{
			arr[i] = rand();
		cout << "number " << i+1 << "= "<<arr[i] << endl;
		

	}

	
		for (int i = 29; i < 0; i--)
		{
			cout << "number " << i+1 << "= " << arr[i] << endl;


		}



















	system("pause");
	
	return 0;
}