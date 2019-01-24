#include <ctime>
#include <iostream>
#include <Windows.h>

using namespace std;





//void FillArray(int arr[], const int COUNTRY, const int MEDAL)
//{
//	for (int i = 0; i < size; ++i)
//		arr[i] = rand() % 100;
//}
//
//
//for (int i = 0; i < 5; i++)
//{
//	for (int j=0; j<3; j++)
//	{
//		if (i==0)
//		{
//
//			if (j==0)
//			{
//arr [i][j]=Gold
//			}
//		}
//	}
//
//}
//
//
//int main()
//{
//	const int COUNTRY = 5, medal = 3;
//	int arr[COUNTRY][MEDAL];
//
//
//
//
//
//	system("pause");
//	return 0;
//}


# include <iostream>

using namespace std;

void FillArray(int arr[5][3]) {

	int userImput = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 0) {
				if (j == 0) {
					cout << "Enter count of gold medal for  Ukraine: " << endl;
					cin >> userImput;
					arr[i][j] = userImput;
				}
				else if (j == 1) {
					cout << "Enter count of silver medal for  Ukraine: " << endl;
					cin >> userImput;
					arr[i][j] = userImput;
				}
				else if (j == 2) {
					cout << "Enter count of bronze medal for  Ukraine: " << endl;
					cin >> userImput;
					arr[i][j] = userImput;
				}
			}
			else if (i == 1) {
				if (j == 0) {
					cout << "Enter count of gold medal for  Spain: " << endl;
					cin >> userImput;
					arr[i][j] = userImput;
				}
				else if (j == 1) {
					cout << "Enter count of silver medal for  Spain: " << endl;
					cin >> userImput;
					arr[i][j] = userImput;
				}
				else if (j == 2) {
					cout << "Enter count of bronze medal for  Spain: " << endl;
					cin >> userImput;
					arr[i][j] = userImput;
				}
			}
			else if (i == 2) {
				if (j == 0) {
					cout << "Enter count of gold medal for  Portugal: " << endl;
					cin >> userImput;
					arr[i][j] = userImput;
				}
				else if (j == 1) {
					cout << "Enter count of silver medal for  Portugal: " << endl;
					cin >> userImput;
					arr[i][j] = userImput;
				}
				else if (j == 2) {
					cout << "Enter count of bronze medal for  Portugal: " << endl;
					cin >> userImput;
					arr[i][j] = userImput;
				}
			}
			else if (i == 3) {
				if (j == 0) {
					cout << "Enter count of gold medal for  USA: " << endl;
					cin >> userImput;
					arr[i][j] = userImput;
				}
				else if (j == 1) {
					cout << "Enter count of silver medal for  USA: " << endl;
					cin >> userImput;
					arr[i][j] = userImput;
				}
				else if (j == 2) {
					cout << "Enter count of bronze medal for  USA: " << endl;
					cin >> userImput;
					arr[i][j] = userImput;
				}
			}
			else if (i == 4) {
				if (j == 0) {
					cout << "Enter count of gold medal for  Canada: " << endl;
					cin >> userImput;
					arr[i][j] = userImput;
				}
				else if (j == 1) {
					cout << "Enter count of silver medal for  Canada: " << endl;
					cin >> userImput;
					arr[i][j] = userImput;
				}
				else if (j == 2) {
					cout << "Enter count of bronze medal for  Canada: " << endl;
					cin >> userImput;
					arr[i][j] = userImput;
				}
			}
		}
	}

}

void PrintArr(int arr[5][3]) {
	cout << "Country \tGold  Silver  Bronze " << endl;
	for (int i = 0; i < 5; i++) {
		if (i == 0) {
			cout << "Ukraine\t\t";
		}
		else if (i == 1) {
			cout << "Spain\t\t";
					   			 		}
		else if (i == 2) {
			cout << "Portugal\t\t";
		}
		else if (i == 3) {
			cout << "USA\t\t";
		}
		else if (i == 4) {
			cout << "Canada\t\t";
		}

		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Total (int arr[5][3]) 
{
	int GoldM = 7, SilverM = 6, BronzeM = 5;
	int UkraineSum = 0, SpainSum = 0, PortugalSum = 0, USASum = 0, CanadaSum = 0;

	for (int i = 0; i < 5; i++) {
		
		if (i == 0) {
			UkraineSum = arr[i][0] * GoldM + arr[i][1] * SilverM + arr[i][2] * BronzeM;
			cout << "Total score for Ukraine: " << UkraineSum << endl;
		}
		else if (i == 1) {
			SpainSum = arr[i][0] * GoldM + arr[i][1] * SilverM + arr[i][2] * BronzeM
		}
			UkraineSum = arr[i][0] * GoldM + arr[i][1] * SilverM + arr[i][2] * BronzeM
			UkraineSum = arr[i][0] * GoldM + arr[i][1] * SilverM + arr[i][2] * BronzeM
			UkraineSum = arr[i][0] * GoldM + arr[i][1] * SilverM + arr[i][2] * BronzeM

		}
	}



}


	void Sort(int arr[5][3])
	{
		int GoldR = 7, SilverR = 6, BronzeR = 5;
		
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 3; j++) {
				arr



			}



		}





int main() {

	const int COUNTRY = 5, MEDAL = 3;
	int arr[COUNTRY][MEDAL];

	FillArray(arr);

	PrintArr(arr);




	system("pause");
	return 0;
}












