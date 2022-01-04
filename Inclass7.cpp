#include<iostream>
using namespace std;
int square(int x);
int cube(int x);
int main()
{
	int number;
	cout << "Enter the number :";
	cin >> number;
	cout << "Square of the number :" << square(number) << endl;
	cout << "Cube of the number :" << cube(number) << endl;
	return 0;
}
int square(int x)
{
	return x * x;
}
int cube(int x)
{
	return x * x * x;
}