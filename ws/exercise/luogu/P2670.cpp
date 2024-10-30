#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    cin.get();
    int map[y+2][x+2];
    memset(map,0,sizeof(int)*(x+2)*(y+2));
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=y;j++)
            if(cin.get()=='*')
                map[j][i]=1;
        cin.get();
    }
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=y;j++)
        {
            if(map[j][i]==1)
                cout << '*'; 
            else
                cout << map[j-1][i-1]+map[j][i-1]+map[j+1][i-1]+map[j+1][i]
                +map[j+1][i+1]+map[j][i+1]+map[j-1][i+1]+map[j-1][i];
        }
        cout << endl;
    }
    return 0;
}