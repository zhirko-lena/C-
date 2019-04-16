#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(unsigned(time(NULL)));
	int task = 12;
	taskOperation = 0;
	float a = 0;
	float b = 0;
	int correctAnswer = 0;



	for (i = 0; i < task; i++) {
		cout << "Choose task operation: 1- addition; 2- subtruction; 3- multiplication; 4- division" << endl;
		cin >> taskOperation;


		if (taskOperation == 1) {
			for (j = 0; j < 3; i++) {
				a = rand() % 1000;
				b = rand() % 1000;

				cout << j + 1 << ") " << a << "+" << b << "=";
				cin >> studentResult;
				result = a + b;
				if (result == studentResult) {
					cout << "Correct!" << endl;
					correctAnswer++;
				}
				else {
					cout << "Wrong!" << endl;
				}


			}
		}

		/*else if (taskoperation == 2) {







			if (taskoperation == 3) {








				if (taskoperation == 4) {











				}*/


		if (correctAnswer <= 12 && correctAnswer >= 10) {
			cout << "Result: Great!" << endl;
		}
		else if (correctAnswer <= 9 && correctAnswer >= 7) {
			cout << "Result: Good" << endl;
		}
		else if (correctAnswer <= 6 && correctAnswer >= 4) {
			cout << "Result: So-so" << endl;
		}
		else {
			cout << "Result: Bad" << endl;
		}



		system("pause");
		return 0;
	}
