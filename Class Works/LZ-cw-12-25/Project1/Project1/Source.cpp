#include <ctime>
#include <iostream>
#include <Windows.h>

using namespace std;
int main()
{
	srand(unsigned(time(NULL)));

	const int ROW = 5, COL = 4;
	INT arr[ROW][COL], Counter = 0, k = 0, i = 0, j = 0, sum = 0, middle = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = rand() % 40 + (-20);
			cout << "arr[" << i << "][" << j << "]= " << arr[i][j] << "\t";

			if (arr[i][j] == 0)
			{
				Counter++;
			}
			sum += arr[i][j];

		}
		cout << endl;


		/*sum += arr[i][j];
		middle = sum / COL;
		cout << "middle= " << middle << endl;*/

		/*middle = sum / COL;
		cout << "middle= " << sum << endl;*/
	}

	for (int j = 0; j < 4; j++)
	{
		sum += arr[i][j];
		cout << "middle= " << sum << endl;
	}

	cout << "Count of elements equal to 0: " << Counter << endl;

	/*if (arr[i][j] == 0)
	{
		Counter++;
	}

	cout << "Count of elements equal to 0: " << Counter << endl;*/

	cout << "Enter row and column number:" << endl;
	cout << "Row: ";
	cin >> i;
	cout << "Column: ";
	cin >> j;
	cout << "arr[" << i << "][" << j << "]= " << arr[i][j] << "\t";








	system("pause");
	return 0;
}