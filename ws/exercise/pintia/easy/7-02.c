//7-2 h0132. 钞票和硬币
//其实可以用第一题的算法的，只需要考虑浮点数的精度问题
#include<stdio.h>
int calculate(int,int,int*);
int main()
{
    float sum;
    int sum_copy;
    char* S[14] = {"NOTAS:","100.00","50.00","20.00","10.00","5.00","2.00","MOEDAS:","1.00","0.50","0.25","0.10","0.05","0.01"};
    int s[14] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int divi[14] = {0,10000,5000,2000,1000,500,200,0,100,50,25,10,5,1};
    scanf("%f",&sum);
    sum_copy = sum*100;
    for(int i=0;i<14;i++) (i==0 || i==7)?:(sum_copy = calculate(sum_copy,divi[i],&s[i]));
    for(int i=0;i<14;i++) (i==0 || i==7)?printf("%s\n",S[i]):(i<7 ? printf("%d nota(s) de R$ %s\n",s[i],S[i]):printf("%d moeda(s) de R$ %s\n",s[i],S[i]));
    return 0;
}
int calculate(int sum,int amount,int* p)
{
    while(sum/amount>=1) 
        sum -= amount,(*p)++;
    return sum;
}