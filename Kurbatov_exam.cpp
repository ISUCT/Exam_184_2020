#include <iostream>
#include <string>
using namespace std;

class Animals
{
public:
	Animals(string location, string boundaries)
	{
		this->location = location;
		this->boundaries = boundaries;
	}
	virtual void display()
	{
		cout << "Animal sleep" << endl;
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
		cout << "Lion " <<  location << " " << boundaries << endl;
	}
};
int main() {
	Cat Basilyi("russia", "ivanovo");
	Basilyi.display();
	Lion Daniil("america", "arizona");
	Daniil.display();
	return 0;
}