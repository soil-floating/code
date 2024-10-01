//7-57 FP3-(x-10)的三次方
#include<stdio.h>
int pow(int,int);////该函数在头文件math.h定义，#include<math.h>，直接用就好了
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",pow(x-10,3));
    return 0;
}
int pow(int x,int n)////该函数在头文件math.h定义，#include<math.h>，忽略
{
    if(n ==1) return x;
    return pow(x,n-1)*x;
}