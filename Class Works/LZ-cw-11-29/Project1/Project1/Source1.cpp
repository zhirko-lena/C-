#include <iostream>
using namespace std;
int main()
{
	//int a = 9;
	//int b = 5;
	//int res = a & b;
	//cout << res << endl;

	//int c = 6;
	//int d = 5;
	//int result = c & d;
	//cout << result << endl;


	//enum month {jan, feb, march};
	//cout << jan << endl;

	//enum test {t, jan};
	//cout << jan << endl;

	/*enum month { Jan = 1, Feb, March, Apr, May, Jan, Jul, Aug, Sep, Oct, Nov, Dec};
	cout << month::jan << month::feb << month::march << endl;*/

	/*enum month { Jan = 1, Feb, March, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
	cout << month::Jan << "- Jan" << month::Feb << "- Feb" << month::March << "- March" << month::Apr << "- Apr" << month::May << "- May" << month::Jun << "- Jun" << month::Jul << "- Jul" << month::Aug << "- Aug" << month::Sep << "- Sep" << month::Oct << "- Oct" << month::Nov << "- Nov" << month::Dec <<"- Dec" << endl;

	cout << "enter month number 1-12" << endl;
	int choise;
	cin >> choise;
	switch (choise)
	{
	case month::Jan:
	case month::Feb:
	case month::Dec:
		cout << "Winter" << endl;
		break;
	case month::March:
	case month::Apr:
	case month::May:
		cout << "Spring" << endl;
		break;
	case month::Jun:
	case month::Jul:
	case month::Aug:
		cout << "Summer" << endl;
		break;
	case month::Sep:
	case month::Oct:
	case month::Nov:
		cout << "Autumn" << endl;
		break;
	default:
		cout << "Enter correct number from 1 to 12" << endl;

	}*/


	/*----------------------------------------------------------------Task 1------------------------------------------------------------------*/

	/*float cm;
	enum metric { mm = 1, dm, m };
		cout << "Enter cm: ";
	cin >> cm;
	cout << metric::mm << "- convert to mm; " << metric::dm << "- convert to dm; " << metric::m << "- convert to m" << endl;
	int choise;
	cin >> choise;
	switch (choise)
	{
	case metric::mm:
		cout << cm << " to mm= " << cm * 10 << endl;
		break;
	case metric::dm:
		cout << cm << " to dm= " << cm / 10 << endl;
		break;
	case metric::m:
		cout << cm << " to m= " << cm /100 << endl;
		break;
	default:
		cout << "Enter correct number from 1 to 3" << endl;

	}*/

	/*------------------------------------------------------------------Task 2------------------------------------------------------------------*/

	/*enum country { UA = 1, PTL, NTLNDS };

	cout << country::UA << "- capital of Ukraine; " << country::PTL << "- capital of Portugal; " << country::NTLNDS << "- capital of Netherlands" << endl;
	int choise;
	cout << "Ennter number of country- ";
	cin >> choise;
	switch (choise)
	{
	case country::UA:
		cout<<"The capital of Ukraine is Kiev"<<endl;
		break;
	case country::PTL:
		cout << "The capital of Portugal is Lisboa" << endl;
		break;
	case country::NTLNDS:
		cout << "The capital of Netherlands is Amsterdam" << endl;
		break;
	default:
		cout << "Enter correct number from 1 to 3" << endl;
	}*/

	/*------------------------------------------------------------------Task 5------------------------------------------------------------------*/

	/*enum enimal { dog = 1, kangaroo, monkey, woolf };
	cout << enimal::dog << "- dog" << enimal::kangaroo << "- kangaroo" << enimal::monkey << " - monkey"<<enimal::woolf<<"- woolf"<< endl;
	int choise;
	cout << "Enter number from 1 to 4: ";
	cin >>choise;
	switch (choise)
	{case enimal::dog:
	case enimal::woolf:
		cout << "Predator" << endl;
		break;
	case enimal::kangaroo:
	case enimal::monkey:
		cout << "Herbivorous" << endl;
		break;
	default:
		cout<< "Enter correct number from 1 to 4" << endl;

	}*/


	/*------------------------------------------------------------------Task 4------------------------------------------------------------------*/


	/*enum direction { east = 1, west, north, south };
	cout << direction::east << "- East; " << direction::west << "- West; " << direction::north << "- North; " << direction::south << "- South" << endl;
	int choise;
	cout << "Enter number from 1 to 4: ";
	cin >> choise;

	switch (choise)
	{
	case direction::east:
		cout << "If u'll turn back u'll be heading to the West" << endl;
		break;
	case direction::west:
		cout << "If u'll turn back u'll be heading to the East" << endl;
		break;
	case direction::north:
		cout << "If u'll turn back u'll be heading to the South" << endl;
		break;
	case direction::south:
		cout << "If u'll turn back u'll be heading to the North" << endl;
		break;
	default:
		cout << "Enter correct number from 1 to 4" << endl;

	}*/

/*------------------------------------------------------------------Task 3------------------------------------------------------------------*/


enum day { mnd = 1, tsd, wnd, thrd, fr, st, snd };
cout << day::mnd << "- Monday; " << day::tsd << "- Tuesday; " << day::wnd << "- Wednesdya; " << day::thrd << "- Thuersday" << day::fr<<"- Friday"<< endl;
int choise;
cout << "Enter number from 1 to 4: ";
cin >> choise;

switch (choise)
{


}














	system("pause");
	return 0;
}