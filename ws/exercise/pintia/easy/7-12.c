//7-12 FP13-直角三角形的斜边长
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f %f",&a,&b);
    c = pow(a*a+b*b,0.5);//貌似该用sqrt()
    printf("%.1f",c);
    return 0;
}