#include <iostream>
using namespace std;
float arithmetic(float* arr, int s) {
    float sum = 0;
    for (int i = 0; i < s; i++) {
        sum += arr[i];
    }
    return (sum / s);
}
int main() {
    float a[3] = { 8.3, 5.4, 8.9 };
    float sr = arithmetic(a, 3);
    cout << sr;
    return 0;
}