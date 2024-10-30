#include<iostream>
using namespace std;
int main()
{
    int n;
    int site_x,site_y;
    cin >> n;
    int magicSquare[n][n];
    site_x=n/2;
    site_y=0;
    for(int i=0;i<n*n;i++)
        magicSquare[i/n][i%n]=0;
    magicSquare[site_y][site_x]=1;
    for(int i=2;i<=n*n;i++)
    {
        if(site_y==0 && site_x!=n-1)
        {
            site_y=n-1;
            site_x=site_x+1;
            magicSquare[site_y][site_x]=i;
        }
        else if(site_y!=0 && site_x==n-1)
        {
            site_y=site_y-1;
            site_x=0;
            magicSquare[site_y][site_x]=i;
        }
        else if(site_y==0 && site_x==n-1)
        {
            site_y=site_y+1;
            magicSquare[site_y][site_x]=i;
        }
        else if(site_y!=0 && site_x!=n-1 && magicSquare[site_y-1][site_x+1]==0)
        {
            site_y=site_y-1;
            site_x=site_x+1;
            magicSquare[site_y][site_x]=i;
        }
        else
        {
            site_y=site_y+1;
            magicSquare[site_y][site_x]=i;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << magicSquare[i][j];
            if(j!=n-1)
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}