/*
* Создать класс, описывающий понятие работник, со свойствами:

фамилия;

стаж;

часовая заработная плата;

количество отработанных часов.
*/

#include <iostream>
#include <cstring>

using namespace std;

class Worker
{
private:
	string Surname; // Фамилия
	int HowManyWork; // стаж
	int HourlyWage; // часовая зароботная плата
	int HoursOfWork; // количетсво отработанных часов
	int salary; // зарплата
public:
	Worker(string SurN, int HMW, int HW, int HOW)
	{
		Surname = SurN;
		HowManyWork = HMW;
		HourlyWage = HW;
		HoursOfWork = HOW;
	}

	int getSalary()
	{
		salary = HourlyWage * HoursOfWork;
		return salary; // зарплата за день
	}

	void setHours(int HOW)
	{
		this->HoursOfWork = HOW;
	}

	

	void Display()
	{
		getSalary();
		cout << Surname << " work " << HowManyWork << " years." << endl << "His/her hourly wage - " << HourlyWage << endl;
		cout << Surname << " work " << HoursOfWork << " hours! " << endl << Surname << "`s salary - " << salary;
	}

	~Worker(){}

};

int main()
{
	Worker Nikita("Nikita", 5, 125, 9);
	Nikita.Calc();
	Nikita.Display();
	Nikita.setHours(10);
	cout << endl << endl;
	Nikita.Display();
	Nikita.~Worker();
	cout << endl << endl;
	Worker Inokentiy("Inokentiy", 2, 85, 7);
	Inokentiy.Calc();
	Inokentiy.Display();
	Inokentiy.~Worker();
	cout << endl << endl;
	Worker* Jskonst = new Worker ("Jskonst", 100, 100, 100);
	Jskonst->Display();
	return 0;
}