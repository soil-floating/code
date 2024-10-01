//7-25 绩点计算 - 《C++编程基础及应用》- 习题3-3
#include<stdio.h>
int main()
{
    double a[5];
    int b[5];
    double c=0;
    double GPA=0;
    for(int i=0;i<5;i++)
    {
        scanf("%lf %d",&a[i],&b[i]);
        a[i]=(a[i]>=90?4:a[i]*4/90);
        c +=b[i];
    }
    for(int i=0;i<5;i++)
        GPA+= a[i]*b[i]/c;
    printf("GPA:%.2lf\n",GPA);
    return 0;
}