//7-5 FP5-整数反序
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d is changed to:%d%d%d%d",a,a%10,a%100/10,a%1000/100,a/1000);//可以和成一个反序的单个整数再打印
}