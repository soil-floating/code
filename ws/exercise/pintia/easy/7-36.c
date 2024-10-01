//7-36 圆柱体表面积
#include<stdio.h>
#define PI 3.14159
int main()
{
    double r,h,s;
    scanf("%lf %lf",&r,&h);
    s=2*r*r*PI+2*r*PI*h;
    printf("%.2lf",s);
    return 0;
}