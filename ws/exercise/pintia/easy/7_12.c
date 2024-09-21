#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f %f",&a,&b);
    c = pow(a*a+b*b,0.5);
    printf("%.1f",c);
    return 0;
}
