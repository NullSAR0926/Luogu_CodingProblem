#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >>n;
	const int num = n;
	int arr[num];
	for (int i = 0; i < n; i++)
	{	cin >>arr[i];	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{	cout <<"Abiyoyo, Abiyoyo.\n";	}
		cout <<"Abiyoyo, yo yoyo yo yoyo.\nAbiyoyo, yo yoyo yo yoyo.\n";
	}
}
