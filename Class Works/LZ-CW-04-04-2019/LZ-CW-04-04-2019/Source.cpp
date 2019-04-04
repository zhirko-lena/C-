#include <iostream>
#include <ctime>
#include <string>
#include <fstream>

using namespace std;

//int main() {
//	ofstream writeFile;
//	ifstream readFile;
//	string path = "db.txt";
//	/*string path = "D:/db.txt";*/
//	/*writeFile.open(path, ofstream::app);
//	if (!writeFile.is_open()) {
//		cout << "can't open file" << endl;
//	}
//	else {
//		cout << "works" << endl;
//		writeFile << "fjfjf" << endl;
//	}
//*/
//
//	readFile.open(path);
//	if (!readFile.is_open()) {
//		cout << "can't open file" << endl;
//	}
//	else {
//		/*char data;
//		while (readFile.get(data)) {
//			cout << data << endl;
//		}*/
//
//		string data;
//		while (!readFile.eof()) {
//			getline(readFile, data);
//			cout << data << endl;
//		}
//	}
//
//
//	/*char data;
//	while (writeFile.get(data)) {
//		cout << data << endl;
//	}*/
//
//	readFile.close();
//	writeFile.close();
//
//
//	system("pause");
//	return 0;
//}






int main() {
	ofstream writeFile;
	ifstream readFile;
	string path = "pb.txt";
	string position;

	/*void menu() {

	 }*/

	writeFile.open(path, ofstream::app);
	if (!writeFile.is_open()) {
		cout << "can't open file" << endl;
	}
	else {
		cout << "enter name, surname, city (enter 'exit' for quit):" << endl;
		while (position != "exit") {

			cin >> position;
			writeFile << position << endl;
		}

	}


	readFile.open(path);
	if (!readFile.is_open()) {
		cout << "can't open file" << endl;
	}
	else {

		string data;
		while (!readFile.eof()) {
			getline(readFile, data);
			cout << data << endl;
		}
	}





	readFile.close();
	writeFile.close();


	system("pause");
	return 0;
}
