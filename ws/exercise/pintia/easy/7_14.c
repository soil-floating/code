#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,x,v1,v2;
    do{
        scanf("%f %f %f",&a,&b,&c);
    }while(b*b-4*a*c < 0);
    v1 = (-b-pow(b*b-4*a*c,0.5))/(2*a);
    v2 = (-b+pow(b*b-4*a*c,0.5))/(2*a);
    printf("v1=%.2f,v2=%.2f",v1,v2);
    return 0;
}
