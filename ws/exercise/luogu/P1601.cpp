#include<iostream>
#include<string>
#include<cassert>
using namespace std;
void polish(string&,string&);
int main()
{
    string first,second,result;
    cin >> first >> second;
    //cout << first.length() << second.length() << result.length() << endl;
    polish(first,second);
    //cout << first.length() << second.length() << result.length() << endl;
    polish(first,result);
    //cout << first.length() << second.length() << result.length() << endl;
    for(int i=1;i<=first.length();i++)
    {
        int a=first[first.length()-i]-48;
        int b=second[first.length()-i]-48;
        int c=result[first.length()-i]-48;
        int tmp=(a+b+c)/10;
        result[first.length()-i]=(a+b+c)%10+48;
        if(tmp!=0)
        {
            if(i!=first.length())
                result[first.length()-i-1]+=tmp;
            else
                result=char(tmp+'0')+result;
        }
    }
    cout << result;
    return 0;
}
void polish(string &first,string &second)
{
    int len_f=first.length();
    int len_s=second.length();
    if(len_f!=len_s)
    {
        if(len_f>len_s)
            for(int i=1;i<=len_f-len_s;i++)
                second='0'+second;
        else
            for(int i=1;i<=len_s-len_f;i++)
                first='0'+first;
    }
}