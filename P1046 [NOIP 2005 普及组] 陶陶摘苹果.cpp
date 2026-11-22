#include <iostream>
using namespace std;
int main()
{
    int apple[10];
    for (int i = 0; i < 10; i++)
    {
        cin >>apple[i];
    }
    int height;
    cin >>height;
    int num = 0;
    for (int i = 0; i < 10; i++)
    {
        if (apple[i] <= height + 30)
        {
            num++;
        }
    }
    cout <<num <<endl;
}
