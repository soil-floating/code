/**
 * Powered by Moyu
 */
#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int len;
    cin >> len;
    int array[len];
    for(int i=0;i<len;i++)
        cin >> array[i];
    for(int i=0;i<len-1;i++)
    {
        bool right=1;
        for(int j=0;j<len-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                count++;
                int tmp=array[j];
                array[j]=array[j+1];
                array[j+1]=tmp;
                right=0;
            }
        }
        if(right)
                break;
    }
    cout << count;
    return 0;
}