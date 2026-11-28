#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >>n;
	const int num = n;
	int maparr[num][4];
	for (int i = 0; i < n; i++)
	{
		int a, b, g, k;
		cin >>a >>b >>g >>k;
		maparr[i][0] = a;
		maparr[i][1] = b;
		maparr[i][2] = g;
		maparr[i][3] = k;
	}
	int poix, poiy;
	int mapNum = 0;
	bool isFind = false;
	cin >>poix >>poiy;
	for (int i = n - 1; i >= 0; i--)
	{
		if (poix < maparr[i][0] || poiy < maparr[i][1])
		{	continue;	}
		if (poix > maparr[i][0] + maparr[i][2] || poiy > maparr[i][1] + maparr[i][3])
		{	continue;	}
		else
		{
			mapNum = i + 1;
			isFind = true;
			break;
		}
	}
	if (isFind == false)
	{	cout <<-1 <<endl;	}
	else
	{	cout <<mapNum <<endl;	}
}
