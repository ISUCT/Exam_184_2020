#include <iostream>
using namespace std;

// Find max number class
class Max {
private:
    int max;
public:
    void find_max(int* numbers, int n) {
        for (int i = 0; i < n; i++) {
            if (numbers[i] > max) {
                max = numbers[i];
            }
        }
    }
    void display() {
        cout << "Max number of your sequence is: " << max << endl;
    }
};

int main()
{
    Max max;
    const int n = 10;
    int numbers[n] = { 1, 4, 10, 2, 3, 7, 4, 5, 6, 25 };

    // Example
    max.find_max(numbers, n);
    max.display();

    return 0;
}