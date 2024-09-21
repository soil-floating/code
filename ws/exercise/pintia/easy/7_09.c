#include<stdio.h>
int main(){
    float a,b,c;
    scanf("%f %f",&a,&b);
    c=a,a=b,b=c;
    printf("After exchange:x1=%.2f,x2=%.2f",a,b);
    return 0;
}
