#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int n,m,k;
    int count=0;
    cin >> n >> m >> k;
    int map[n][n];
    memset(map,0,sizeof(int)*n*n);
    for(int i=0;i<m;i++)
    {
        int siteX,siteY;
        cin >> siteX >> siteY;
        siteX-=1;
        siteY-=1;  
        for(int Y=siteY-2;Y<=siteY+2;Y++)
        {
            if(Y<0 || Y>n-1)
                continue;
            for(int X=siteX-2;X<=siteX+2;X++)
            {
                if(X<0 || X>n-1)
                    continue;
                if(abs(siteX-X)+abs(siteY-Y)<=2)
                    map[Y][X]=1;
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        int siteX,siteY;
        cin >> siteX >> siteY;
        siteX-=1;
        siteY-=1;
        for(int Y=siteY-2;Y<=siteY+2;Y++)
        {
            if(Y<0 || Y>n-1)
                continue;
            for(int X=siteX-2;X<=siteX+2;X++)
            {
                if(X<0 || X>n-1)
                    continue;
                    map[Y][X]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(map[i][j]==0)
                count++;
    cout << count;
    return 0;
}