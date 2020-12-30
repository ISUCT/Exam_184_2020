// Написать класс, содержащий метод, реализующую вывод таблицы y = 1+ sin(b^3 + x^3) b=2, x на интервале от 0 до 3pi с шагом 0.1pi. X, a и b являются передаваемыми параметрами метода. Показать пример использования реализованного класса.
//

#include <iostream>
#include <math.h>
using namespace std;
const double pi = 3.14;
class Tabl {
private:
	double x;
	int b;
public:
	Tabl(double a, int c) {
		x = a;
		b = c;
	}
	void display() {
		for (x; x <= 3 * pi; x = x + 0.1 * pi) {
			cout << 1 + sin(pow(b, 3) + pow(x, 3)) << endl;
		}
	}
};
int main() {

	Tabl one(0, 2);
	one.display();
	return 0;
}