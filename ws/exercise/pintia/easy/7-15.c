//7-15 FP16 字符串转整数
#include<stdio.h>
int main()
{
    int a,b,c,d;
    a = getchar();
    getchar();
    b = getchar();
    getchar();
    c = getchar();
    a-=48,b-=48,c-=48;
    d = a*100+b*10+c;
    printf("%d",d);
    return 0;
}