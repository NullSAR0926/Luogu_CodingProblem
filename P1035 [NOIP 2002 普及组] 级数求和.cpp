#include <iostream>

using namespace std;

int main()
{
    long long k;
    cin >>k;
    double c_n = 1;
    double count = 1;
    double sum = 0;
    while(true)
    {
        sum += c_n;
        if (sum > k)
        {
            cout <<count <<endl;
            return 0;
        }
        count++;
        c_n = 1 / count;
    }
}
