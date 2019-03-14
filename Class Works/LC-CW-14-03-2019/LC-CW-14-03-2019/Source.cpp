#include <iostream>
#include <ctime>
using namespace std;

/*int main() {

	char str[4] = "www";
	cout << sizeof(char) << endl;
	cout << sizeof(str) << endl;
	cout << str << endl;
	char stringArr[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	cout << stringArr << endl;
	cout << strlen(str)<< endl;

	for (int i = 0; i <= strlen(stringArr); i++) {
		cout << stringArr[i] << "\t";


	}

	char name [255];

	cin >> name;
	cout << name << endl;

	int main() {
		setlocale(LC_ALL, "ukr");
		//------------------Block1------------------
		//char str[] = "Hello world!";
		//char string[] = { 'H','e','l','l','o','\0' };

		//cout << str << endl;
		//cout << string << endl;
		//cout << strlen(string) << endl;

		//char name[255] = "";
		//cout << "Enter your name:" << endl;
		//cin >> name;
		//cout << "Hi, " << name << endl;
		//cout << strlen(name) << endl;
		//------------------Block1------------------
		//------------------Block2------------------
		double a = 65.14231224324234;
		//cout << char(a) << endl;
		//cout << int(a) << endl;
		//cout << float(a) << endl;
		//cout << bool(a) << endl;

		/*int x = a;
		cout << "x " <<x << endl;*/
		//------------------Block2------------------
		//------------------Block3------------------


		//char str[] = "Привіт!";
		//   cout << str << endl;
		//cout << sizeof(char) << endl;

		//for (int i = 0; i <= 255; i++) {
		//	cout << "code = " << i << " char = " << (char)i << endl;
		//}

		/*int a = 65;

		cout << (char)66 << endl;
		cout << (char)32 << endl;
		cout << (char)72 << endl;
		cout << (char)7 << endl;

char strArr[255];
cout << "Enter strArr" << endl;
cin >> strArr;



for (int i = 0; i < strlen(strArr); i++) {
	cout << "Text: " << strArr[i] << " CharCode = " << int(strArr[i]) << "\t";
}
cout << endl;

//------------------Block3------------------

system("pause");
return 0;
	}








	system("pause");
	return 0;
}*/


int main() {

	//Написати програму, яка отримує від користувача довільний набір цифр (кодів) та виводить на екран новоутворений рядок символів.



	//cout << "Enter numbers from 65 to 90 & from 97 to 122 for to type symbols\nExit- 0" << endl;

	//for (int i = 1; i <= 122; i++) {

	//	cin >> i;

	//	if (i == 0) {
	//		break;
	//	}

	//}



	//cout << (char)i;





	//Написати програму, яка отримує від користувача довільний набір cимволів та виводить на екран рядок кодів символів, по суті, закодований рядок.

	char text[255];
	cout << "Enter text bellow:" << endl;
	cin >> text;
	cout << "CharCode:" << endl;
	for (int i = 0; i < strlen(text); i++) {
		cout << int(text[i]) << "\t";
	}

	cout << endl;



	system("pause");
	return 0;

}


