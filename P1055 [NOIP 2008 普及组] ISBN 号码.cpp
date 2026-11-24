#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string isbn;
	vector<int> num;
	cin >>isbn;
	int allNum = 0, signNum = 0, endNum = 12;
	char endx = '\0';
	for (int i = 0; i < isbn.length() - 2; i++)
	{
		if (isbn[i] >= '0' && isbn[i] <='9')
		{	num.push_back(isbn[i] - '0');	}
	}
	if (isbn[isbn.length() - 1] == 'X')
	{	endx = 'X';	}
	else
	{	endNum = (isbn[isbn.length() - 1] - '0');	}
	for (int i = 0; i < 9; i++)
	{	allNum += num[i] * (i + 1);	}
	signNum = allNum % 11;
	if (endNum == signNum || (signNum == 10 && endx == 'X'))
	{	cout <<"Right";	}
	else
	{
		string rightIsbn = isbn.substr(0, isbn.length() - 1);
		if (signNum == 10)
		{
			rightIsbn += 'X';
			cout <<rightIsbn;
			return 0;
		}
		rightIsbn += (char)(signNum + '0');
		cout <<rightIsbn;
	}
}
