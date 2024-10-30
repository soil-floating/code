#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char num[7];
    int amount=0,n,end;
    cin >> end >> n;
    for(int i=1;i<=end;i++)
    {
        sprintf(num,"%d",i);
        for(int i=0;i<strlen(num);i++)
        if(num[i]==n+48)
            amount++;
    }
    cout << amount;
    return 0;
}