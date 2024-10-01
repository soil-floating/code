//7-26 和与平均 - 《C++编程基础及应用》- 习题3-4
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d,%.2f",a+b+c,(a+b+c)/3.0);
    return 0;
}