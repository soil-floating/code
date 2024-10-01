//7-4 计算误差
#include<stdio.h>
int main (){
    double a,b,c,d,e,f;
    scanf("%lf,%lf",&a,&b);
    c=((int)(a*100+0.5))/100.0;
    d=((int)(b*100+0.5))/100.0;
    e=a+b;
    f=c+d;
    printf("%-15lf+%15lf=%-15.2lf\n",a,b,e);
    printf("%-15.2lf+%15.2lf=%-15.2lf\n",c,d,c+d);
    printf("dev:%lf",(e-f)>0?(e-f):(f-e));
    return 0;
}