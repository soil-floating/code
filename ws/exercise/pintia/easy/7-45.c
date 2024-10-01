//7-45 三位整数的各位数字
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d = %d + %d*10 + %d*100",a,a%10,a/10%10,a/100);
    return 0;
}