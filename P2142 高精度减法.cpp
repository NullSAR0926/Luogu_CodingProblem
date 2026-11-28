#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s1, s2;
	cin >>s1 >>s2;
	vector<int> s1v, s2v;
	for (int i = s1.size() - 1; i >= 0; --i)
	{	s1v.push_back(s1[i] - '0');	}
	for (int i = s2.size() - 1; i >= 0; --i)
	{	s2v.push_back(s2[i] - '0');	}
	vector<int> outcome;
	int t = 0;
	bool isminus = false;
	if (s1.size() < s2.size())	{	isminus = true;	swap(s1v, s2v);	}
	else if (s1.size() == s2.size())
	{
		for (int i = s1.size() - 1; i >= 0; i--)
		{
			if (s1v[i] == s2v[i])	continue;
			if (s1v[i] > s2v[i])	break;
			if (s1v[i] < s2v[i])	{	isminus = true;	swap(s1v, s2v);	break;	}
		}
	}
	for (auto i = 0llu; i < max(s1v.size(), s2v.size()); i++)
	{
		t = -t;
		if (i < s1v.size())	t += s1v[i];
		if (i < s2v.size())	t -= s2v[i];
		if (t < 0)	{	outcome.push_back(t + 10);	t = 1;	}
		else	{	outcome.push_back(t);	t = 0;	}
	}
	while (outcome.back() == 0 && outcome.size() > 1)
	{	outcome.pop_back();	}
	if (isminus == true)	cout <<"-";
	for (int i = outcome.size() - 1; i >= 0; i--)
	{	cout <<outcome[i];	}
}
