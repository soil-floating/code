#include<stdio.h>
double pow(double,int);
int main(){
    double a;
    scanf("%lf",&a);
    printf("%.2lf",pow(a,5));
}
double pow(double x,int n){
    if(n ==1) return x;
    return pow(x,n-1)*x;
}
