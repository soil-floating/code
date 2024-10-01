//7-21 h0179. 输出字符菱形
#include<stdio.h>
void print(int,char);
int main(){
    char ch = getchar();
    for(int i=1;i<=3;i++){
        print(i,ch);
        putchar('\n');
    }
    for(int i=2;i>=1;i--){
        print(i,ch);
        i==1?:putchar('\n');
    }
    return 0;
}
void print(int i,char ch){
    for(int k=1;k<=3-i;k++)
        putchar(' ');
    for(int k=1;k<=i;k++)
        putchar(ch);
    for(int k=1;k<=i-1;k++)
        putchar(ch);
}