#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int day;
    int money=0;
    cin >> day;
    for(int i=1,j,k=1;i<=day;k++)
        for(j=1;i<=day&&j<=k;j++,i++)
            money+=k;
    cout << money;
    return 0;
}