//7-30 将秒数转换成时分秒
#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int h=s/3600;
    s-=h*3600;
    int min=s/60;
    s-=min*60;
    printf("%d:%d:%d\n",h,min,s);
    return 0;
}