#include<iostream>
#include<vector>
#include<map>
using namespace std;
typedef long long LL;
int main()
{
    LL N,C;
    LL count=0;
    cin >> N >> C;
    vector<LL> nums;
    nums.reserve(N);
    map<LL,LL> hash;
    for(int i=0;i<N;i++)
    {
        int num;
        cin >> num;
        nums.push_back(num);
        hash[num-C]++; 

    }
    for(auto &a:nums)
    {
        count+=hash[a];
    }
    cout << count << endl;
    return 0;
}