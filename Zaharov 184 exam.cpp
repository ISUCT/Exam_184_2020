// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Зде
//

#include <iostream>
#include <vector>
using namespace std;

void random(int(*a), int n)
{
	for (int i = 0; i < n; i++) {

		a[i] = rand() % 130 - 80;
		std::cout << "a[" << i << "]=" << a[i] << endl;
	}
}
std::vector<int> nechet(int(*a), int n)
{
	std::vector<int> vector(0);
	for (int i = 0; i < n; i++)
	{
		if ((a[i]) % 2 != 0) {
			std::cout << "a[" << i << "]=" << a[i] << endl;
		} 
		else {
			vector.push_back(a[i]);
		}
	}
	return vector;
}
int main()
{
	std::cout << "Enter size of massive —---> ";
	int n;
	std::cin >> n;
	int *A = new int[n];
	std::cout << "Massive:" << endl;
	random(A, n);
	std::cout << "Odd numbers:" << endl;
	nechet(A, n);
	std::cout << "\n";
	return 0;
}