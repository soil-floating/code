#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<string> in;
    for(int i=0;i<num;i++)
    {
        string tmp;
        cin >> tmp;
        in.push_back(tmp);
    }
    sort(in.begin(),in.end(),
    [](string a,string b)->bool
    {
        return a+b>b+a;
    }
    );
    for(int i=0;i<in.size();i++)
        cout << in[i];
    return 0;
}
