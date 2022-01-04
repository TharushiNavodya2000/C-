#include<iostream>
using namespace std;
int main()
{
	int number;
	int count = 1;

	cout << "Enter number :";
	cin >> number;

	while (count <= 12)
	{
		cout << number << " x " << count << " = " << number * count << endl;
		count++;
	}
	return 0;
}