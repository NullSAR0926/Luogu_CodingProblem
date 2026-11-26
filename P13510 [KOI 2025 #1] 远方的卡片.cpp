#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	int n;
	cin >>n;
	vector<int> v;
	set<int> maxN;
	for (int i = 0; i < n * 2; i++)
	{	int temp = 0;	cin >>temp;	v.push_back(temp);	}
	for (int i = 0; i < n; i++)
	{
		int ffind, bfindN;
		auto beginv = v.begin();
		vector<int>::iterator fit = find(v.begin(), v.end(), i + 1);
		reverse(v.begin(), v.end());
		auto bit = find(v.begin(), v.end(), i + 1);
		reverse(v.begin(), v.end());
		ffind = fit - beginv;
		bfindN = bit - beginv;
		int bfind = n * 2 - bfindN - 1;
		maxN.insert(bfind - ffind - 1);
	}
	int outcome = *(--maxN.end());
	cout <<outcome;
}
