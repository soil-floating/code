
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char willFind[11];
    char passage[(int)1e6+1];
    int i=0;
    int count=0;
    bool ifTheFirst=true;
    int first;
    cin >> willFind;
    while(passage[i]=cin.get())
        i++;
    i=0;
    for(int j=0;j<strlen(passage);i++)
    {
        if(tolower(passage[j])==tolower(willFind[0]) && j+strlen(willFind)<strlen(passage))
        {
            for(int k=1;k<strlen(willFind) && tolower(willFind[k])==tolower(passage[j+k]);k++)
            {
                if(k==strlen(willFind)-1)
                    count++;
                if(k==strlen(willFind)-1 && ifTheFirst)
                {
                    ifTheFirst=~ifTheFirst;
                    first=j;
                }
            }
        }
    }
    if(count!=0)
        cout << count << ' ' << first;
    else
        cout << '-1';
    return 0;
}