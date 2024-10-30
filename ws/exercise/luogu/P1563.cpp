#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
typedef struct infor
{
    string occupation;
    bool directory;
}infor;
void find(vector<infor>&,long long&,bool,long long);
int main()
{
    long long lenRole,lenOrder;
    cin >> lenRole >> lenOrder;
    long long site_now=0;
    vector<infor> site;
    for(long long i=0;i<lenRole;i++)
    {
        bool direction;
        string occupation;
        cin >> direction >> occupation;
        infor tmp={occupation,direction};
        site.push_back(tmp);
    }
    for(long long i=0;i<lenOrder;i++)
    {
        bool direction_LorR;
        long long num;
        cin >> direction_LorR >> num;
        find(site,site_now,direction_LorR,num);
    }

    cout << site[site_now].occupation;
    return 0;
}
void find(vector<infor> &site,long long &site_now,bool direction,long long num)
{
    bool method;
    method=direction^site[site_now].directory;
    if(method)
    {
        site_now+=num;
        site_now%=site.size();
    }
    else
    {
        site_now-=(num%site.size());
        if(site_now<0)
            site_now+=site.size();

    }
}