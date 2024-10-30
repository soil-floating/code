#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string ISBN;
    cin >> ISBN;
    string ISBN_copy(ISBN);
    int res=0;
    ISBN.erase(remove(ISBN.begin(),ISBN.end(),'-'),ISBN.end());
    for(int i=0;i<ISBN.size()-1;i++)
    {
        int tmp;
        if(ISBN[i]=='X')
            tmp=10;
        else
            tmp=ISBN[i]-48;
        res=res+tmp*(i+1);
    }
    res%=11;
    if(res==ISBN[ISBN.size()-1]-48 || res==10 && ISBN[ISBN.size()-1]=='X')
        cout << "Right";
    else
    {
        if(res==10)
            ISBN_copy[ISBN_copy.size()-1]='X';
        else
            ISBN_copy[ISBN_copy.size()-1]=res+48;
        cout << ISBN_copy;
    }
    return 0;
}