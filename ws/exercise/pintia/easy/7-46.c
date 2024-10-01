//7-46 求并联电阻的值
#include<stdio.h>
int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("电阻%.2lf和%.2lf的并联电阻为%.2lf\n",a,b,a*b/(a+b));
    return 0;
}