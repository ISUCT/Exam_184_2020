#include <iostream>
#include <string>
using namespace std;

class bird
{
public:
	void swim()
	{
		cout << "all the ducks are swimming lol" << endl;
	};
	virtual void quack() = 0;
	virtual void fly() = 0;
};
class duck : public bird
{
private:
	string name;
public:
	duck(string name)
	{
		this -> name = name;
		cout << "Hello! Let me introduce you my duck! Its name is " << this -> name << endl;
	}
	void quack() override
	{
		cout << name << " has quacked.. OMG" << endl;
	}
	void fly() override
	{
		cout << name << " has flown..." << endl;
	}
};
int main()
{
	bird *Daizy = new duck("Daizy");
	Daizy -> swim();
	Daizy->fly();
	duck Donald("Donald");
	string act;
	
	cout << "What do yo want to happen with Donald? He can swim, quack and fly!" << endl;
	cout << "Enter the action:";
	cin >> act;
	if (act == "swim")
		Donald.swim();
	else if (act == "fly")
		Donald.fly();
	else if (act == "quack")
		Donald.quack();
	else
		cout << "Ooops...Donald can't do this.. :/" << endl;
	return 0;
}
