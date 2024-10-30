#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int num;
    vector<int> coefficient;
    cin >> num;
    num+=1;
    coefficient.reserve(num);
    for (int i = 0; i < num; i++)
    {
        int tmp;
        cin >> tmp;
        coefficient.push_back(tmp);
    }
    if(num>1)
        for (int i = 0; i < num; i++)
        {
            if (coefficient[i] == 0)
                continue;
            else
            {
                if (abs(coefficient[i]) == 1 && i!=0 && i!=coefficient.size()-1)
                    coefficient[i] > 0 ? cout << '+' : cout << '-';
                else
                    if (i == 0)
                    {
                        if(abs(coefficient[i])==1)
                            coefficient[i] > 0 ? cout : cout << '-';
                        else
                            cout << coefficient[i];
                    }
                    else
                        cout << showpos << coefficient[i];
            }
            if (i != coefficient.size() - 1 && coefficient.size()-i-1 != 1)
            cout << "x^" << coefficient.size() - i-1;
            if (i != coefficient.size() - 1 && coefficient.size()-i-1 == 1)
                cout << "x";
        }
        if (num == 1)
            cout << num;
    return 0;
}