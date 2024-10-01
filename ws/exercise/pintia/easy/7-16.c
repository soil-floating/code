//7-16 FP17 计算x的5次方
#include<stdio.h>
double pow(double,int);//该函数在头文件math.h定义，#include<math.h>，直接用就好了
int main()
{
    double a;
    scanf("%lf",&a);
    printf("%.2lf",pow(a,5));
}
double pow(double x,int n)////该函数在头文件math.h定义，直接使用就好了，以下忽略
{
    if(n ==1) return x;
    return pow(x,n-1)*x;
}