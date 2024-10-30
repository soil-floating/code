#include<iostream>
#include<vector>
using namespace std;
typedef struct site
{
    int x_start;
    int y_start;
    int x_lenth;
    int y_lenth;
}site;
int main()
{
    int line;
    int x,y;
    int n=-1;
    cin >> line;
    vector<site> site_information;
    site_information.reserve(line);
    for(int i=0;i<line;i++)
    {
        site tmp;
        cin >> tmp.x_start >> tmp.y_start >> tmp.x_lenth >> tmp.y_lenth;
        site_information.push_back(tmp);
    }
    cin >> x >> y;
    for(int i=0;i<site_information.size();i++)
    {
        if(site_information[i].x_start<=x && site_information[i].x_start+site_information[i].x_lenth>=x
        && site_information[i].y_start<=y && site_information[i].y_start+site_information[i].y_lenth>=y)
            n=i+1;
    }
    cout << n;
    return 0;
}