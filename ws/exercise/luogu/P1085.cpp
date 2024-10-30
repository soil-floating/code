/**
 * Powered by Moyu
 */
#include<iostream>
using namespace std;
int main()
{
    int day=0;
    int max=0;
    for(int i=1;i<=7;i++)
    {
        int a,b;
        cin >> a >> b;
        if(a+b>max && a+b>8)
        {
            day=i;
            max=a+b;
        }
    }
    cout << day;
    return 0;
}