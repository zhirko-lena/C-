#include <iostream>
#include <ctime>
#include <string>

using namespace std;

//class car {
//public:
//	string model;
//	int year;
//	string color;
//	float power;
//
//	void ShowCarInfo() {
//		cout << "====================" << model << "====================" << endl;
//		cout << "model: " << model << endl;
//		cout << "year: " << year << endl;
//		cout << "color: " << color << endl;
//		cout << "power: " << power << endl;
//
//	}
//
//};
//
//int main() {
//	car audi;
//	/*car test;
//	car bob;*/
//	audi.model = "audi";
//	audi.year = 2005;
//	audi.color = "red";
//	audi.power = 2.5;
//
//	/*cout << "model: " << audi.model << endl;
//	cout << "year: " << audi.year << endl;
//	cout << "color: " << audi.color << endl;
//	cout << "power: " << audi.power << endl;*/
//
//
//
//	audi.ShowCarInfo();
//
//	car bmw;
//	bmw.model = "bmw";
//	bmw.year = 2019;
//	bmw.color = "purple";
//	bmw.power = 2.7;
//
//	bmw.ShowCarInfo();
//
//
//	system("pause");
//	return 0;
//}


//class point {
//public:
//	int year;
//	int power;
//
//	void ShowPointInfo() {
//		cout << "====================" << model << "====================" << endl;
//		cout << "model: " << model << endl;
//		cout << "year: " << year << endl;
//		cout << "color: " << color << endl;
//		cout << "power: " << power << endl;
//
//	}
//
//};
//
//int main() {
//
//
//
//
//
//	system("pause");
//	return 0;
//}



//class car {
//private:
//	string model;
//	int year;
//	string color;
//	float power;
//public:
//	void ShowCarInfo() {
//		cout << "====================" << model << "====================" << endl;
//		cout << "model: " << model << endl;
//		cout << "year: " << year << endl;
//		cout << "color: " << color << endl;
//		cout << "power: " << power << endl;
//
//	}
//
//	void SetModel(string newModel) {
//
//		model = newModel;
//	}
//
//	void SetColor(string newColor) {
//
//		color = newColor;
//	}
//
//	void SetYear(int newYear) {
//
//		year = newYear;
//	}
//
//	void SetPower(float newPower) {
//
//		power = newPower;
//	}
//
//	int GetYear() {
//		return year;
//	}
//
//};
//
//int main() {
//	car audi;
//	audi.SetModel ("audi");
//	audi.SetYear (2005);
//	audi.SetColor ("black");
//	audi.SetPower (2.5);
//
//	audi.ShowCarInfo();
//	audi.SetYear(2020);
//	cout << audi.GetYear() << endl;
//
//	
//	system("pause");
//	return 0;
//}


class Account {
private:
	int number;
	int amount;
	string currency;
public:
	void ShowAccountInfo() {
		cout << "Account number:" << number << endl;
		cout << "Total amount:" << amount << endl;
		cout << "Currency:" << currency << endl;

	}

	void SetNumber(int newNumber) {
		number = newNumber;
	}

	void SetAmount(int newAmount) {
		amount = newAmount;
	}

	void SetCurrency(string newCurrency) {
		currency = newCurrency;
	}


	int GetAmount() {
		return amount;
	}

};

int main() {
	Account PrivatBank;
	PrivatBank.SetNumber(1234567890);
	PrivatBank.SetAmount(0);
	PrivatBank.SetCurrency("USD");


	cout << "Choose the action: 1- Create an account and put money on, 2- put money, 3- get money of your account, 0- out" << endl;

	for (int i = 0; i > 0; i++) {
		int j;
		cin >> j;
		if (j == 1) {
			PrivatBank.GetAmount();

			PrivatBank.ShowAccountInfo();
		}
		else if (j == 2) {

		}
		else if (j == 3) {

		}
		else {
			break;
		}

	}




	system("pause");
	return 0;
}