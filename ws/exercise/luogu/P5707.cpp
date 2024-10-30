#include<iostream>
#include<iomanip>
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::setw;
	using std::setfill; 
    int v,s;
    int min;
    int hour;
    cin >> s >> v;
    min=((double)s/v>s/v ? s/v+11 : s/v+10);
    hour=(min%60==0?8-min/60:7-min/60);
    min=(min%60==0?0:60-min%60);
    hour=(hour>=0 ? hour : 24+hour);	
    cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << min << endl;
    return 0;
}