//7-54 从键盘上输入四个整数a,b,c,d，输出其中最大者。
#include<stdio.h>
int main()
{
    int a[4];
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
        getchar();
    }
    int max=a[0];
    for(int i=1;i<4;i++)
        if(a[i]>max)
            max=a[i];
    printf("最大值是%d\n",max);
    return 0;
}