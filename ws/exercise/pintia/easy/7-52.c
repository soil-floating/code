//7-52 编写一个程序，其功能为：从键盘输入一元二次方程ax2+bx+c=0（a!=0）的各项系数a、b、c，计算判别式d=b*b-4ac的值。
#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("a:%lf;b:%lf;c:%lf",&a,&b,&c);
    printf("判别式的值为:%.2lf\n",b*b-4*a*c);
    return 0;
}