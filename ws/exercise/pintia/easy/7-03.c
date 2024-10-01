//7-3 两整数求和*
#include<stdio.h>
int main()
{
    int a,b;
    while(-1 != scanf("%d%d",&a,&b))//或者EOF!=
        printf("%d\n",a+b);
    return 0;
}