//7-53 华氏温度转换为摄氏温度
#include<stdio.h>
int main()
{
    int F;
    double C;
    scanf("华氏温度:%d",&F);
    C=(F-32)*5/9.0;
    printf("转换为摄氏温度为:%.2lf\n",C);
    return 0;
}