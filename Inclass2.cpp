#include<iostream>
using namespace std;

int main()
{
	double distance;

	cout << "Enter the distance if you want to visit :";
	cin >> distance;

	if (distance <= 30)
	{
		cout << "Amount :" << distance * 30 << endl;
	}
	else
	{
		cout << "Amount :" << ((distance - 30) * 40) + (distance * 50) << endl;
	}
}