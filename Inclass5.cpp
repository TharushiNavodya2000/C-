#include<iostream>
using namespace std;
int main()
{
	int number;
	int sum = 0;
	cout << "Enter the number :";
	cin >> number;

	for (int ini = 1; ini <= number; ini++)
	{
		sum = sum + ini;
	}

	cout << "Sum :" << sum << endl;
	return 0;
}