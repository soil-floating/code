/**
 * Powered by Moyu
 */
#include<iostream>
using namespace std;
int main()
{
    int appleHigh[10];
    int high;
    int count=0;
    for(int i=0;i<10;i++)
        cin >> appleHigh[i];
    cin >> high;
    for(int i=0;i<10;i++)
        if(high+30>=appleHigh[i])
            count++;
    cout << count;
    return 0;
}