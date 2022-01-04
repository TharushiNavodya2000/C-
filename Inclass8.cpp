#include<iostream>
using namespace std;
int main()
{
	double width;
	double length;

	cout << "Enter width :";
	cin >> width;
	cout << "Enter length :";
	cin >> length;
	cout << "Perimeter :" << (width + length) * 2;

	return 0;
}