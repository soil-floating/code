//7-18 人生进度条
#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    double percent = age/78.0*100;
    printf("%.2lf%%",percent);
    return 0;
}