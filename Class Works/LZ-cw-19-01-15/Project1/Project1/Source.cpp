#include <ctime>
#include <iostream>
#include <Windows.h>

using namespace std;

/*char Sum(int a, int b)
{
	if (a < b)
	{
		return'<';
	}
	else if (a > b)
	{
		return'>';
	}
	else
	{
		return'=';
	}
}
*/


/*int main()
{
	int a, b;
	cout << "enter a" << endl;
	cin >> a;
	cout << "enter b" << endl;
	cin >> b;

	char result = Sum(a, b);

	cout << result << endl;

	system("pause");
	return 0;
}*/

/*---------------------------------------Task 1  (Написати функцію, яка виводить горизонтальну лінію із зірочок певної довжини...)-------------------------------------*/
/*void E(int hor, int vert)
{
	for (int i = 0; i < hor; i++)
	{
		cout << "*";

	}
	cout << endl;
	for (int j = 0; j < vert; j++)
	{
		cout << "*" << endl;

	}
	for (int i = 0; i < hor; i++)
	{
		cout << "*";

	}
	cout << endl;
	for (int j = 0; j < vert; j++)
	{
		cout << "*" << endl;

	}
	for (int i = 0; i < hor; i++)
	{
		cout << "*";

	}
	cout << endl;
}


int main()
{
	int hor, vert;
	cout << "enter hor" << endl;
	cin >> hor;
	cout << "enter vert" << endl;
	cin >> vert;

	E(hor, vert);


	system("pause");
	return 0;
}*/


/*---------------------------------------Task 2  (Написати функцію, яка отримує в якості параметрів два цілих числа і повертає суму чисел з діапазону між ними.)-------------------------------------*/


/*void Sum(int first, int second, int first1, int second1)
{



	cout << endl;
}?????????????????????????????????????????????????????????????????????????????????????????????????!!!!!!!!!!!!!!!!


int main()
{
	int first, second;
	cout << "enter first number " << endl;
	cin >> first;
	cout << "enter second number" << endl;
	cin >> second;


	Sum(hor, vert);


	system("pause");
	return 0;
}*/

/*---------------------------------------Task 3  (Написати функцію, яка отримує дату (день, місяць) і виводить назву свята, що випадає на цей день (наприклад, 7.01 – Різдво, 9.05 – День Перемоги). Запрограмувати реакцію програми на 4 – 5 свят)-------------------------------------*/

void Holliday(int day, int month)
{

	if (day == 7 & month == 1)
	{
		cout << "Merry Christmas";
	}
	else if (day == 29 & month == 8)
	{
		cout << "Happy Birthday!";
	}
	else if (day == 1 & month == 1)
	{
		cout << "Happy New Year!";
	}
	else if (day ==  & month == 8)
	{
		cout << "Happy Birthday!";
	}
	else if (day == 29 & month == 8)
	{
		cout << "Happy Birthday!";
	}
	else
	{
		cout << "Go to work!";
	}
}



int main()
{
	int day, month;
	cout << "enter day" << endl;
	cin >> a;
	cout << "enter month" << endl;
	cin >> b;

	char result = Sum(a, b);

	cout << result << endl;

	system("pause");
	return 0;
}

















