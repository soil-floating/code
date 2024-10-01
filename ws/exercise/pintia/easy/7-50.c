//7-50 输入一个字符ch，然后输出与它前后相邻的两个字符
#include<stdio.h>
int main()
{
    char ch=getchar();
    printf("%c%c\n",ch-1,ch+1);
    return 0;
}