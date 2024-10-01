//7-24 分苹果 - 《C++编程基础及应用》- 习题3-2
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int everyone=num/5;
    int leave=num%5;
    int sum=num-leave;
    printf("Everyone have %d apples.\n%d apples have been taken in total.\nreturned %d apples to the teacher.",everyone,sum,leave);
    return 0;
}