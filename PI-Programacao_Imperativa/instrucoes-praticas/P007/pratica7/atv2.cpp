#include <iostream>
#include <math.h>

using namespace std;

int main (void) 
{
    int number = 0;

    cout << "Digite um número inteiro: ";
    cin >> number;

    int arr[] = {0};

    int j = 0, num = 0;

    while ((num * 10 ^ j) != number)
    {
        num = number / 10;
        j++;
        arr[j] = num;
        cout << (num * 10 ^ j) << endl;
    }

    cout << "array: " << arr << endl;

    cout << j << " | " << (j == number);

    return 0;
}