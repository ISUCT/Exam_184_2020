#include <iostream>
#include <string>
using namespace std;

class Animals
{
public:
	Animals(string location, string boundaries)
	{
		setLocation(location);
		setBoundaries(boundaries);
	}
	virtual void display()
	{
		cout << "Animals " << location << " " << boundaries << endl;
	}
	virtual void sleep()
	{
		cout << "Animals sleep" << endl;
	}
	void setLocation(string location) {
		if (location != "space") {
			this->location = location;
		}
	}
	void setBoundaries(string boundaries) {
		if (location != "space") {
			this->boundaries = boundaries;
		}
	}
protected:
	string location;
	string boundaries;
};
class Cat : public Animals
{
public:
	Cat(string location, string boundaries) : Animals(location, boundaries) {};
	void display() override
	{
		cout << "Cat " << location << " " << boundaries << endl;
	}
};
class Lion : public Animals
{
public:
	Lion(string location, string boundaries) : Animals(location, boundaries) {};
	void display() override
	{
		cout << "Lion " << location << " " << boundaries << endl;
	}
};
int main() {
	Cat Basilyi("russia", "ivanovo");
	Basilyi.display();
	Lion Daniil("america", "brasilia");
	Daniil.display();

	return 0;
}
/*
установить значение location
поменять потом его
*/