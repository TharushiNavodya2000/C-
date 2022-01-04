#include<iostream>
using namespace std;
int main()
{
	double CM;
	
	cout << "Enter the cm value :";
	cin >> CM;
	cout << "Inch :" << (1 / 2.54) * CM << endl;
	
	return 0;
}