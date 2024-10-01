//7-1 h0131. 钞票
#include<stdio.h>
int main()
{
    int sum;
    int num[7]={0,0,0,0,0,0,0};
    char* amount[7]={"100,00","50,00","20,00","10,00","5,00","2,00","1,00",};
    scanf("%d",&sum);
    printf("%d\n",sum);
    while(sum/100>=1)
    {
        num[0]++;
        sum -= 100;
    }
    while(sum/50>=1)
    {
        num[1]++;
        sum -= 50;
    }
    while(sum/20>=1)
    {
        num[2]++;
        sum -= 20;
    }
    while(sum/10>=1)
    {
        num[3]++;
        sum -= 10;
    }
    while(sum/5>=1)
    {
        num[4]++;
        sum -= 5;
    }
    while(sum/2>=1)
    {
        num[5]++;
        sum -= 2;
    }
    num[6] = sum;
    for(int i=0;i<7;i++) 
        printf("%d nota(s) de R$ %s\n",num[i],amount[i]);
    return 0;    
}
