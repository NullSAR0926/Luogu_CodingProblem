#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >>n;
	string classN;
	cin >>classN;
	int count = 0;
	int coffee = 0;
	for (int i = 0; i < n; i++)
	{
		if (classN[i] == '1')
		{	count++;	coffee = 2;	continue;	}
		if (classN[i] == '0')
		{
			if (coffee > 0)
			{	count++;	coffee -= 1;	continue;	}
		}
	}
	cout <<count;
}
