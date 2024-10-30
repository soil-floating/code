#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int table[n][n];
    memset(table,0,sizeof(int)*n*n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0 || j==i)
                table[i][j]=1;
            else
            {
                table[i][j]=table[i-1][j]+table[i-1][j-1];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout << table[i][j] << " ";
        cout << endl;
    }
    return 0;
}