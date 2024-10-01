//7-47 输入一个三位数的正整数，然后求该数的3个数字之和。
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d的3个数字之和是%d\n",a,a/100+a/10%10+a%10);
    return 0;
}