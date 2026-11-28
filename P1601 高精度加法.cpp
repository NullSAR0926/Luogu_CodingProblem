#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s1, s2;
	cin >>s1 >>s2;
	vector<int> s1v, s2v;
	for (int i = s1.size() - 1; i >= 0; i--)
	{	s1v.push_back(s1[i] - '0');	}
	for (int i = s2.size() - 1; i >= 0; i--)
	{	s2v.push_back(s2[i] - '0');	}
	vector<int> outcome;
	int t = 0;
	for (int i = 0; i < max(s1.size(), s2.size()); i++)
	{
		if (i < s1.size())	t += s1v[i];
		if (i < s2.size())	t += s2v[i];
		outcome.push_back(t % 10);
		t /= 10;
	}
	if (t > 0)	outcome.push_back(t);
	for (int i = outcome.size() - 1; i >= 0; i--)
	{	printf("%d", outcome[i]);	}
}
