/**
 * Powered by Moyu
 */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int j=0;
    cin >> j;
    for(int i=2;i<=(int)sqrt(j);i++)
    {
        if(j%i==0)
            cout << j/i;
    }
    return 0;
}