/**
 * Powered by Moyu
 */
#include<iostream>
using namespace std;
int main()
{
    int remain=0;
    int reposit=0;
    int i;
    for(i=1;i<=12;i++)
    {
        int consume;
        cin >> consume;
        if(remain+300<consume)
            break;
        else
        {
            remain+=(300-consume);
            reposit+=(remain)/100*100;
            remain%=100;
        }
    }
    if(i!=13)
        cout << '-' << i;
    else
        cout << int(reposit*1.2)+remain;
    return 0;
}