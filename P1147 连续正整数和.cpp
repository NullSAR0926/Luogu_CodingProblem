#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >>n;
	for (int i = 1; i <= n / 3 + 1; i++)
	{
		int sum = 0, inil = i, endn = 0;
		for (int j = i; j <= n / 3 + 1; j++)
		{
			sum += j;
			if (sum > n)	break;
			if (sum == n)
			{
				endn = j;
				cout <<inil <<" " <<endn <<"\n";
				break;
			}
		}
	}
	if (n % 2 == 1)
	{	cout <<n / 2 <<" " <<n / 2 + 1 <<"\n";	}
}
