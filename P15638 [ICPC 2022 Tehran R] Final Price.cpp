#include <iostream>

using namespace std;

int main()
{
	int n, outcome = 0;
	cin >>n;
	for (int i = 0; i < n ;i++)
	{
		int temp;
		cin >>temp;
		outcome += temp;
	}
	cout <<outcome;
}
