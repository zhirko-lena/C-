#include <iostream>
#include <ctime>
#include <string>
using namespace std;


//struct person {
//	string name;
//	unsigned int age:7;
//	void ShowPersonInfo() {
//		cout << "name: " << name << "\tage: " << age << endl;
//	}
//};
//
//
//int main() {
//
//	person Bill;
//	Bill.name = "Bill";
//	Bill.age = 127;
//
//
//	Bill.ShowPersonInfo();
//	
//
//	system("pause");
//	return 0;
//}


struct Date {
	unsigned int sec : 6;
	unsigned int min : 6;
	unsigned int hour : 5;
	unsigned int day : 5;
	unsigned int month : 4;
	unsigned int year : 11;



	void ShowDateInfo() {
		cout << "Time: " << hour << ":" << min << ":" << sec << "\nDate: " << day << "." << month << "." << year << endl;
	}
};


int main() {
	int sec = 0;
	int min = 0;
	int hour = 0;
	int day = 0;
	int month = 0;
	int year = 0;
	Date Today;
	cout << "Enter current hours: ";
	cin >> hour;
	cout << "Enter current minutes: ";
	cin >> min;
	cout << "Enter current seconds: ";
	cin >> sec;
	cout << "Enter current day: ";
	cin >> day;
	cout << "Enter current month: ";
	cin >> month;
	cout << "Enter current year: ";
	cin >> year;

	Today.hour = hour;
	Today.min = min;
	Today.sec = sec;
	Today.day = day;
	Today.month = month;
	Today.year = year;

	Today.ShowDateInfo();


	system("pause");
	return 0;
}