#include<iostream>
#include<string>
#include<cassert>
using namespace std;                                                                                                                                                        using namespace std;
int main()
{
    char tmp;
    int hua11=0,op11=0;
    int hua21=0,op21=0;
    string round;
    int site=0;
    while((tmp=cin.get())!='E')
        if(tmp!='\n')
            round.push_back(tmp);
    round.push_back(tmp);
    for(int i=0;i<round.size();i++)
    {
        if(hua11>=11 && hua11-op11>=2  || op11>=11 && op11-hua11>=2)
        {
            cout << hua11 << ':' << op11 << endl;
            hua11=0;
            op11=0;
        }
        if(round[i]=='W')
            hua11++;
        if(round[i]=='L')
            op11++;
        if(round[i]=='E')
            cout << hua11 << ':' << op11 << endl;
    }
        cout << endl;
        for(int i=0;i<round.size();i++)
        {
            if(hua21>=21 && hua21-op21>=2  || op21>=21 && op21-hua21>=2)
            {
                cout << hua21 << ':' << op21 << endl;
                hua21=0;
                op21=0;                                                                                                                                                                op21=0;
            }
                if(round[i]=='W')
                    hua21++;
                if(round[i]=='L')
                    op21++;
                if(round[i]=='E')
                cout << hua21 << ':' << op21 << endl;
    }
        return 0;
}