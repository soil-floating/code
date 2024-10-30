/**
 * Powered by Moyu
 */
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int len,amount;
    int count=0;
    cin >> len >>amount;
    bool tree[len+1];
    memset(tree,1,len+1);
    for(int i=0;i<amount;i++)
    {
        int start,end;
        cin >> start >> end;
        for(int j=start;j<=end;j++)
            tree[j]=0;
    }
    for(int i=0;i<len+1;i++)
        if(tree[i]==1)
        count++;
    cout << count;
    return 0;
}