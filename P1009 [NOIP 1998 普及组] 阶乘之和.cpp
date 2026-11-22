#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >>n;
	vector<vector<int>> AllResult;
    // 从 2 乘到 n
    for (int i = 0; i < n; i++)
	{
		vector<int> result;
		result.push_back(1);
	    for (int j = 2; j <= n - i; j++)
		{
	        int carry = 0;   // 进位
	        // 每一位都乘以 i
	        for (unsigned long long k = 0; k < result.size(); k++)
			{
	            int product = result[k] * j + carry;
	            result[k] = product % 10;      // 当前位
	            carry = product / 10;          // 进位
	        }
	        // 处理剩余的进位
	        // 比如 999 × 2 = 1998，乘完后 carry 还有 1
	        while (carry > 0)
			{
				result.push_back(carry % 10);
				carry /= 10;
			}
		}
		AllResult.push_back(result);
	}
	for (int j = n - 1; j > 0; j--)
	{
		int carry = 0;
		for (int k = 0; k < AllResult[j].size(); k++)
		{
			int calcu = AllResult[j][k] + AllResult[j - 1][k];
			carry = calcu / 10;
			int leftNum = calcu % 10;
			AllResult[j - 1][k + 1] += carry;
			AllResult[j - 1][k] = leftNum;
		}
	}
	for (int i = 0; i < AllResult[0].size(); i++)
	{
		cout <<AllResult[0][AllResult[0].size() - i - 1];
	}
}
