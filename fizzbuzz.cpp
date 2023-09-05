#include <iostream>

using namespace std;

int main (void) 
{
    for (int i = 1; i <= 100; i++)
    {
        string message = "\0";

        if (i % 3 == 0 && i % 5 == 0)
        {
            message = " | FizzBuzz";
        }
        else if (i % 3 == 0)
        {
            message = " | Fizz";
        }
        else if (i % 5 == 0)
        {
            message = " | Buzz";
        }

        cout << i << message << endl;https://github.com/NathalieLima/residenciatic18_2023.git
    }

    return 0;
}