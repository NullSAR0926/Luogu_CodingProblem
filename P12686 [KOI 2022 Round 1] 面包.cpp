#include <iostream>
#include <utility>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	deque<pair<int, int>> pd;
	int n;
	cin >>n;
	for (int i = 0; i < n; i++)
	{
		int atime, btime;
		cin >>atime >>btime;
		pd.push_back(make_pair(atime, btime));
	}
	deque<int> alltime;
	for (int i = 0; i < n; i++)
	{
		if (pd[i].first > pd[i].second)
		{	continue;	}
		else
		{	alltime.push_back(pd[i].second);	}
	}
	if (alltime.size() == 0)
	{	cout <<-1;	return 0;	}
	sort(alltime.begin(), alltime.end());
	cout <<*alltime.begin();
}
