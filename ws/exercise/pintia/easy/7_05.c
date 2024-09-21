#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("%d is changed to:%d%d%d%d",a,a%10,a%100/10,a%1000/100,a/1000);
}
