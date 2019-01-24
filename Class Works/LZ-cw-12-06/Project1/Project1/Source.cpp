#include <iostream>
using namespace std;
int main()
{
	/*int i = 0, sum = 0, numberCount = 0, number = o;
	cout << "Enter loops count: =>" << endl;
	cin >> numberCount;
	while (i < numberCount)
	{
		i++;
		cout << "Enter number: " <<i<<endl;
		cin >> number;
		if (number % 2 == 0)
		{
			sum += number;
		}
	}
	cout << "SUM= " << sum << endl;*/

	/*while (true)
	{
		cout << "Press 0 to exit: " << endl;
		cin >> number;
		if (number == 0)
		{
			break;
		}
	}*/


	//----------------------------------------Task 1-------------------------------------------

	/*int oneCounter = 0, twoCounter = 0, number = 0;

	while (true)
	{
		cout << "Enter number" << endl;
		cin >> number;
		if (number == 0)
		{
			break;
		}
		else if (number == 1)
		{
			oneCounter++;
		}
		else if (number == 2)
		{
			twoCounter++;
		}
	}

	if (oneCounter < twoCounter)
	{
		cout << "1s<2s" << endl;
	}
	else if (oneCounter > twoCounter)
	{
		cout << "1s>2s" << endl;
	}
	else
	{
		cout << "1s=2s" << endl;
	}*/

	//----------------------------------------Task 2------------------------------------------ -


/*int number = 0, i = 0;
	cout << "Enter number- " << endl;
cin >> number;
	do
	{
		i++;
		cout << number << "x" << i << "=" << number * i << endl;

	} while (i<10);*/


	//----------------------------------------Task 3------------------------------------------ -

	/*int money = 0, attraction = 0, moneyLeft = 0;
	const int attrOneCost = 25, attrTwoCost = 15, attrThreeCost = 10, attrFourCost = 30;
	cout << "How much do u have?" << endl;
	cin >> money;
	while (money > 0)
	{
		cout << "Make ur choise by entering number of attraction: attrOne- 1 (costs- $25), attrTwo - 2 (costs - $15), attrThree - 3 (costs - $10), attrFour - 4 (costs - $30)" << endl;
		cin >> attraction;
		if (attraction == 1)
		{
		moneyLeft = money - attrOneCost;

		cout<<"U have "<<
		}



		else if (money<10)
		{
			cout<<"Go find a job and earn some money first!"<<endl;
		}
	}*/

	/*----------------------------------------Task 3 (example)------------------------------------------ -*/


	/*const int KILESO = 50, ROMASKA = 30, BATUT = 70, POOL = 90;
	int money = 0;
	int choise = 0;

	cout << "Enter money count => " << endl;
	cin >> money;

	if (money < ROMASKA) {
		cout << "Low money!\nMin price " << ROMASKA << "UAH" << endl;;
	}

	while (money >= ROMASKA)
	{
		if (money >= POOL) {
			cout << "1. POOL " << POOL << "UAH\n2. BATUT = " << BATUT << "UAH\n3. KILESO " << KILESO << "UAH\n4. ROMASHKA " << ROMASKA << "UAH\n0. Exit\n" << endl;
			cin >> choise;
			if (choise == 0) {
				break;
			}
			else if (choise == 1) {
				money -= POOL;
			}
			else if (choise == 2) {
				money -= BATUT;
			}
			else if (choise == 3) {
				money -= KILESO;
			}
			else if (choise == 4) {
				money -= ROMASKA;
			}
		}

		else if (money >= BATUT) {
			cout << "1. BATUT = " << BATUT << "UAH\n2. KILESO " << KILESO << "UAH\n3. ROMASHKA " << ROMASKA << "UAH\n0. Exit\n" << endl;
			cin >> choise;
			if (choise == 0) {
				break;
			}
			else if (choise == 1) {
				money -= BATUT;
			}
			else if (choise == 2) {
				money -= KILESO;
			}
			else if (choise == 3) {
				money -= ROMASKA;
			}
		}

		else if (money >= KILESO) {
			cout << "1. KILESO " << KILESO << "UAH\n2. ROMASHKA " << ROMASKA << "UAH\n0. Exit\n" << endl;
			cin >> choise;
			if (choise == 0) {
				break;
			}
			else if (choise == 1) {
				money -= KILESO;
			}
			else if (choise == 2) {
				money -= ROMASKA;
			}
		}

		else if (money >= ROMASKA) {
			cout << "1. ROMASHKA " << ROMASKA << "UAH\n0. Exit\n" << endl;
			cin >> choise;
			if (choise == 0) {
				break;
			}
			else if (choise == 1) {
				money -= ROMASKA;
			}
		}

		cout << "Current balance => " << money << endl;

	}

	cout << "Bye!" << endl;*/


	/*----------------------------------------Task 4------------------------------------------ -*/

	int const pin = 333;
	int input, choise;
cout << "Enter pin: " << endl;
		cin >> input;

	while (input == pin)
	{
		
		cout << "Make a choise:\n1- send a message\2- make a call\n3- put some money\n4- block" << endl;
		cin >> choise;
		if (choise == 1)
		{
			cout<<"Enter text..."<<endl;
		}
		else if (choise == 2)
		{
			cout << "Enter phone number..." << endl;
		}
		else if (choise == 3)
		{
			cout << "Enter amount..." << endl;
		}

		else if (choise == 4)
		{
			break;
		}

cout
	}
	




















	system("pause");
	return 0;
}