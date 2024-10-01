//7-51 已知直线方程y=kx+3，输入y以及k,求x
#include<stdio.h>
int main()
{
    double y,k;
    scanf("y:%lf;k:%lf",&y,&k);
    printf("x:%.2lf",(y-3)/k);
    return 0;
}