#include <iostream>
#include <ctime>
#include <string>

using namespace std;

//struct RealEstate
//{
//	string type;
//	short unsigned room;
//	short unsigned floor;
//	float square;
//	string heat;
//	string description;
//
//	void showInfo() {
//
//		cout << " type: " << type << ";\n room: " << room << ";\n floor: " << floor << ";\n square: " << square << ";\n heat: " << heat << ";\n description: " << description << "." << endl;
//	}
//
//	void setDescription(string desc)
//	{
//		description = desc;
//	}
//};
//
//int main() {
//	RealEstate megaFlat;
//	megaFlat.type = "Flat";
//	megaFlat.room = 4;
//	megaFlat.floor = 14;
//	megaFlat.square = 150.0;
//	megaFlat.heat = "Sollar";
//
//	string  desc;
//	cin >> desc;
//	megaFlat.setDescription(desc);
//
//	megaFlat.showInfo();
//
//
//
//	system("pause");
//	return 0;
//}


//
//
//struct Person
//{
//private:
//	string name;
//	string surname;
//	short unsigned age;
//
//public:
//	void showPersonInfo() {
//
//		cout << "name: " << name << ";\nsurname: " << surname << ";\nage: " << age << "." << endl;
//	}
//
//	/*void setDescription(string desc)
//	{
//		description = desc;
//	}*/
//
//	void setAge(int newAge) {
//		if (newAge >= 120 || newAge <= 0) {
//			cout << "Incorrect age!" << endl;
//		}
//		else {
//			age = newAge;
//		}
//	}
//
//	int getAge() {
//		return age;
//	}
//	void setName(string newName) {
//
//		name = newName;
//	}
//
//	void setSurname(string newSurname) {
//
//		surname = newSurname;
//	}
//
//};
//
//int main() {
//
//	Person Bill;
//	/*Bill.name = "Bill";
//	Bill.surname = "Gates";
//	Bill.age = 155;*/
//	Bill.setName("Bill");
//	Bill.setSurname("Gates");
//	Bill.setAge(17);
//	Bill.showPersonInfo();
//	cout << Bill.getAge() << endl;
//
//	   	 
//	system("pause");
//	return 0;
//}



/*====================Task (Створити структуру, яка описує тварину(назва, клас, кличка).Створити функції для роботи з цією структурою
(заповнення об’єкта, вивід на екран даних про об’єкт, функція «подати голос»).)====================================================*/

struct Animal {
private:
	string type;
	string group;
	string name;

public:
	void showAnimalInfo() {

		cout << "type: " << type << ";\ngroup: " << group << ";\nname: " << name << endl;
	}


	void setDescription(string desc)
		//	{
		//		description = desc;
		//	}

};

int main() {






	system("pause");
	return 0;
}


