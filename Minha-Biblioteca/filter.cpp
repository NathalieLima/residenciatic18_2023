#include <iostream>
#include <vector>

using namespace std;

template <typename F> vector<F> filter(F filtrados, bool (*func)(F))
{
    vector<F> array;

    for (F x: filtrados) {
        if (func(x) == true) {
            array.push_back(x);
        }
    }

    return array;
}

bool isPar(int num)
{
    return num % 2 == 0;
};

int main(void)
{
    vector<int> numeros {1, 2, 3, 4, 5, 6};

    vector<int> filtrados = filter<vector <int>>(numeros, &isPar);
}