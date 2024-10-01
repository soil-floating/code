//7-31 统计闰年个数
#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a/4;
    c=a/100;
    d=a/400;
    printf("%d\n",b-c+d);
    return 0;
}