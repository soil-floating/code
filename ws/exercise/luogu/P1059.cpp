/**
 * Powered by Moyu
 */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<int> table;
    for(int i=0;i<size;i++)
    {
        int tmp;
        cin >> tmp;
        table.push_back(tmp);
    }
    sort(table.begin(),table.end(),[](int a,int b) {return a<b;});
    table.erase(unique(table.begin(),table.end()),table.end());
    cout << table.size() << endl;
    for_each(table.begin(),table.end(),[](int i){cout << i << ' ';});
    return 0;
}