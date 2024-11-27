#include <iostream>

using namespace std;

class User {
	int age;
	string name;
	string surname;
public:
	User() {
		age = 10;
		name = "Lol";
		surname = "Joi";
		AmoutOfUsers();
	}
	static int amoutOfUsers;
	static void AmoutOfUsers() {
		amoutOfUsers++;
	}
};

int User::amoutOfUsers = 0;

int main() {
	cout << User::amoutOfUsers << endl;
	User obj;
	cout << User::amoutOfUsers << endl;
	User obj2;
	cout << User::amoutOfUsers << endl;
}