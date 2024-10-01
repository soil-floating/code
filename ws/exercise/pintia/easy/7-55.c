//7-55 FP1-三个整数的平均值和乘积
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%.2f %d",(a+b+c)/3.0,a*b*c);
    return 0;
}