#include<stdio.h>
int main(){
    char ch = getchar();
    for(int i=1;i<=3;i++){
        for(int k=1;k<=3-i;k++) putchar(' ');
        for(int k=1;k<=i;k++) putchar(ch);
        for(int k=1;k<=i-1;k++) putchar(ch);
        i==3?:putchar('\n');
    }
    return 0;
}
