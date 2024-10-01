//7-35 求等差数列的和
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int num = (b-a)/c+1;
    int sum = (b+a)*num/2;
    printf("%d",sum);
    return 0;
}