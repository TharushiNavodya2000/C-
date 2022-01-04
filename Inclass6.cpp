#include<iostream>
using namespace std;
int minimum(int number1, int number2);
int maximum(int number1, int number2);
int multiply(int number1, int number2);

int main()
{
	int number1;
	int number2;

	cout << "Enter number1 :";
	cin >> number1;
	cout << "Enter number2 :";
	cin >> number2;
	cout << "Maximum number :" << maximum(number1,number2) << endl;
	cout << "Minimum number :" << minimum(number1,number2) << endl;
	cout << "Multiply the number :" << multiply(number1,number2) << endl;
}
int minimum(int number1, int number2)
{
	if (number1 < number2)
	{
		return number1;
	}
	else
	{
		return number2;
	}
}
int maximum(int number1, int number2)
{
	if (number1 > number2)
	{
		return number1;
	}
	else
	{
		return number2;
	}
}
int multiply(int number1, int number2)
{
	return number1 * number2;
}