/**
 * Powered by Moyu
 */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i;
    cin >> i;
    int k=1;
    double sum=0;
    for(int j=1;sum<=i;sum+=1.0/j,j++,k++);
    cout << k-1;
    return 0;
}