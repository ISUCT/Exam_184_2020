#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int fact(int k)
{
    int n = 1;
    for (int i = 1; i <= k; i++) n *= i;
    return n;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int k, sum;
    printf("Введите N! = "); scanf("%d", &k);
    sum = fact(k);
    printf("\n%d! = %d\n", k, sum);
    system("pause");
    return 0;
}