#include <iostream>
#include <string>
using namespace std;
class Animal {
public:
	Animal(string l, string b) {
		location = l;
		boundaries = b;
	}
	virtual void display() {
		cout << "animal " << location << " " << boundaries << endl;
	}
	void sleep() {
		cout << "animal sleep" << endl;
	}
protected:
	string location;
	string boundaries;
};
class Lion : public Animal {
public:
	Lion(string location, string boundaries) : Animal(location, boundaries) {};
	void display() override
	{
		cout << "Lion is located in " << location << ", expecially in the " << boundaries << " Desert." << endl;
	}
};
class Cat : public Animal {
public:
	Cat(string location, string boundaries) : Animal(location, boundaries) {};
	void display() override
	{
		cout << "Cat is located in " << location << ", namely in the " << boundaries << " region." << endl;
	}
};

int main() {
	Lion leva("Africa", "Sahara");
	Cat Myrzik("Russia", "Ivanovo");

	Myrzik.display();
	leva.display();
	return 0;
}