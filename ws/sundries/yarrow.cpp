#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
#define YIN "_ _"
#define YUNG "___"
using std::cout,std::endl;
int count(int nums,int times){
    int sub = 4;
    if(times==1) sub=5;
    int left = nums/2 + (rand()%16-8);//天
    int x = left%4;
    int right = nums - left-1;//地与人
    if(x == 0) left-=4;//四季
    else left-=(x);
    right-=(sub-1-x==0?4:sub-1-x);//地与人；闰月
    return right+left;
}
int change(int* s,int* sx){
    
    for(int i=1;i<=6;i++){
        s[i-1]==36?s[i-1]=1,sx[i-1]=0://老阳
        s[i-1]==32?s[i-1]=0,sx[i-1]=0://少阴
        s[i-1]==28?s[i-1]=1,sx[i-1]=1://少阳
        s[i-1]==24?s[i-1]=0,sx[i-1]=1:0;//老阴
    }
    return 0;
}
int printer_yin(void){
    for(int i = 0;i<3;i++) printf("%c",YIN[i]);
    cout << endl;
    return 0;
}
int printer_yung(void){
    for(int i = 0;i<3;i++) printf("%c",YUNG[i]);
    cout << endl;
    return 0;
}
int main(void){
    system("chcp 65001");
    system("cls");
    int total=50;
    int  s[6];//本卦
    int sx[6];//之卦
    total-=1;//大衍五十，其用四十有九……
    srand((unsigned)time(NULL));
    for(int i=1;i<=6;i++){
        for (int j = 1; j <= 3; j++) total = count(total, j);
        s[i-1]=total;
        total = 49;
    }
    change(s,sx);//变爻
    cout << "本卦" << endl;
    for(int i=5;i>=0;i--) s[i]==1?printer_yung():printer_yin();
    cout << endl << endl<< endl << "之卦" << endl;
    for(int i=5;i>=0;i--) sx[i]==1?printer_yung():printer_yin();
    system("pause");
    return 0;
}
