#include <iostream>

using namespace std;

int main ()
{
    /*char word[6] = {'h', 'e', 'l', 'l', 'o'};
    //double val[5] = {1, 2, 3, 4, 5};
    char name[30];

    cout << "ENter your name: ";
    cin >> name;


    cout << word << ", " << name << endl;*/


    char word[] = "hello";
    char name[30];

    cout << "ENter your name: ";
    cin.getline(name, 30);


    cout << word << ", " << name << endl;

    return 0;
}