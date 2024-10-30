/**
 * Powered by Moyu
 */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i=0;
    int j=0;
    while(j<n)
    {
        i++;
        j+=i;
    }
    if(j==n)
    {
        if(i%2==1)
            cout << '1' << '/' << i;
        else
            cout << i << '/' << '1';
    }
    else
    {
        if(i%2==1)
            cout << 1+(j-n) << '/' << i-(j-n);
        else
            cout << i-(j-n) << '/' << 1+(j-n);
    }
    return 0;
}