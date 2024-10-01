//7-27 菲姐游泳 - 《C++编程基础及应用》- 习题3-5
#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int time = c*60+d-a*60-b;
    int h=time/60,m=time%60;
    printf("%d:%d",h,m);
    return 0;
}