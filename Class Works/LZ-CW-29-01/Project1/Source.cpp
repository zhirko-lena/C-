# include <iostream>
# include <ctime>

using namespace std;


/*Написати функцію, яка приймає три аргументи: години, хвилини, секунди. Функція повинна повертати еквівалент переданого їй тимчасового значення в секундах */

int Time(int hours, int min, int sec)
{
	return hours * 3600 + min * 60 + sec;

}



int main() {

	int hours = 2, min = 55, sec = 19;

	cout << Time (hours, min, sec)<< endl;


	system("pause");
	return 0;
}