#include<iostream>
#include<cctype>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int p1,p2,p3;
    cin >> p1 >> p2 >> p3;
    string input;
    cin >> input;
    for(int i=0;i<input.length();i++)
    {
        int front,behind;
        if(input[i]=='-')
        {
            front=input[i-1];
            behind=input[i+1];
            if(front<behind && (isalpha(front) && isalpha(behind) || isdigit(front) && isdigit(behind)))
            {
                string output;
                for(int i=front+1;i<behind;i++)
                {
                    for(int j=0;j<p2;j++)
                    {
                        switch(p1)
                        {
                            case 1:
                                output.push_back(tolower(char(i)));
                                break;
                            case 2:
                                output.push_back(toupper(char(i)));
                                break;
                            case 3:
                                output.push_back('*');
                        }
                    }
                }
                if(p3==2)
                    reverse(output.begin(),output.end());
                for(auto a:output)
                    cout.put(a);
            }
            else
                cout << '-';
        }
        else
            cout.put(input[i]);
    }
    return 0;
}