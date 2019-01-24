#include <ctime>
#include <iostream>
using namespace std;
int main()
{
	/*int i = 0, number = 0;
	cout << "Enter number .." << endl;
	cin >> number;
	for (int i = 0; i < 10; i++)
	{
		cout << i << "*" << number << "=" << i * number << endl;
	}*/

	/*srand(169);
	int a = rand();

	cout << a << endl;*/


	/*srand(time(NULL));
	int a = rand();

	cout << a << endl;

	cout << "test";*/

	/*srand(unsigned(time(NULL)));
	int a = rand();

	cout << a << endl;

	cout << "test";*/

	//srand(unsigned(time(NULL)));
	//int a = rand()%6+1;

	//cout << a << endl;

	//cout << "test";

	/*srand(unsigned(time(NULL)));
	int a = 0, oneCounter=0, twoCounter=0;

	for (int i = 0; i < 10; i++)
	{
		int a = rand() % 41 + 10;

		cout << a << endl;
		if (a % 2 == 0)
		{
			oneCounter++;

		}
		else if (a % 2 != 0)
		{
			twoCounter++;

		}

	}

	cout << "parnyh: " << oneCounter << endl;

	cout << "ne parnyh: " << twoCounter << endl;*/


	/*srand(unsigned(time(NULL)));
	int a = 0, oneCounter = 0;

	for (int i = 0; i < 10; i++)
	{
		oneCounter++;
		a = rand() % 6 + 1;

		cout << a << endl;

		if (a== 6)
		{

			break;
		}


	}

	cout << "Sprob " << oneCounter << endl;*/


	/*srand(unsigned(time(NULL)));
	int player, roll, finalPoint, pointPlayer, pointAI, dice1, dice2, dice3, dice4, dicePlayer, diceAI, choise;
	dicePlayer = dice1 + dice2;
	diceAI = dice3 + dice4;
	cout << "ROLL THE DICE! Enter final point: ";
	cin >> finalPoint;
	for (int i = 0; i < finalPoint; i++)
	{
		player = rand() % 2 + 1;
		if (player == 1)
		{
			cout << "Player's turn (press 1 for rolling): ";
			cin >> choise;
				if (choise==1)
				{

					dice1 = rand() % 6 + 1;
					dice2 = rand() % 6 + 1;
					cout << dicePlayer << endl;
				}
				else
				{
					cout << "Uncorrect, press 1" << endl;
				}
		}
		else if (player == 2)
		{
			cout << "AI's turn: " << endl;
			dice3 = rand() % 6 + 1;
			dice4 = rand() % 6 + 1;
			cout << diceAI << endl;

		}
		if ()
		

	}*/

























	system("pause");
	return 0;
}