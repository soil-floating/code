//7-44 GPS测绘中度分秒转换
#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    double c;
    scanf("%d %d %lf",&a,&b,&c);
    int d=c*10000;
    int num = (d%1000==0)?1:((d%100==0)?2:((d%10==0)?3:4));
    double e =a+((c/60)+b)/60;
    printf("%d°%d′%.*lf″ = %.6lf\n",a,b,num,c,e);
    return 0;
}