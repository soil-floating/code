#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    char num[7];
    int amount=0,start,end;
    cin >> start >> end;
    for(int i=start;i<=end;i++)
    {
        sprintf(num,"%d",i);
        for(int i=0;i<strlen(num);i++)
        if(num[i]=='2')
            amount++;
    }
    cout << amount;
    return 0;
}