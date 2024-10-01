//7-23 英文字母 - 《C++编程基础及应用》- 习题2-2
#include<stdio.h>
int main(){
    int a,b;
    a = getchar();
    scanf("%d",&b);
    a -= 64;
    b += 64;
    printf("%d\n%c",a,b);
    return 0;
}