//7-59 FP6-三个整数的计算
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("average=%.2f sum=%d",(a+b+c)/3.0,a+b+c);
    return 0;
}