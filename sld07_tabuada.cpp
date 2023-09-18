#include <iostream>

using namespace std;

int main(void)
{
	int num;
	
	cout << "Entre com um número: ";
	cin >> num;
	
	cout << "TABUADA DE " << num << endl;
	
	for (int i = 1; i <= 10; i++)
	{
		cout << num << " x " << i << " = " << num * i << endl;
	}
	
	return 0;
}
