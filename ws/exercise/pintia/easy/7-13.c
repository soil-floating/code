//7-13 FP14-计算梯形的面积
#include<stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%f %f %f",&a,&b,&c);
    d = (a+b)*c/2;
    printf("%.2f",d);
    return 0;
}