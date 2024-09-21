//题目有问题
#include<stdio.h>
int main(){
    double v1,v2,a,s,v,t;
    scanf("%lf %lf %lf",&v1,&a,&t);
    s = v1*t + 0.5*a*t*t;
    v2 = v1+a*t;
    v = v2/2/a;//此行
    printf("%.2lf,%.2lf,%.2lf",s,v2,v);
}
