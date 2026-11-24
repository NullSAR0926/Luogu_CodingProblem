#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >>n;
	for (int i = 0; i < n; i++)
	{
		cout <<"+";
		for (int j = 1; j < n - 1; j++)
		{
			if (i != 0 && j == i && i != n - 1)
			{	cout <<"+";	continue;	}
			cout <<"-";
		}
		cout <<"+\n";
	}
}
