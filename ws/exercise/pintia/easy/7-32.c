//7-32 今天后的第n天是星期几
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    b+=a;
    while(!(b>0 && b<=7))
    {
        if(b<=0) b+=7;
        if(b>7) b-=7;
    }
    printf("%d",b);
    return 0;
}