//7-28 对角线 - 《C++编程基础及应用》- 习题3-6
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    double c = sqrt(a*a+b*b);
    printf("The diagonal legnth is: %.1lf cm.",c);
    return 0;
}