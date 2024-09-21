#include<stdio.h>
int main(){
    float fahrenheit,centigrade;
    scanf("%f",&centigrade);
    fahrenheit=centigrade*9/5+32;
    printf("f=%.2f",fahrenheit);
    return 0;
}
