#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
int count =0;
const int CONST_LEN=16;
const int RIGHT_ARR[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
void Count();
bool fill(int,int,int,int,int,int,int);
void bubble(int*);
int main(){
    time_t startTime,endTime;
    startTime=clock();
    system("chcp 65001");
    printf("开始运行：");
    Count();
    endTime=clock();
    printf("共有 %d 种可能！\n共耗时 %lf 秒！\n",count,(double)(endTime-startTime)/CLOCKS_PER_SEC);
    system("pause");
    return 0;
}
void Count(){
    for (int i1=1;i1<=CONST_LEN;i1++){
        for (int i2=1;i2<=CONST_LEN;i2++){
            if(i1!=i2)
            for (int i3=1;i3<=CONST_LEN;i3++){
                if(i2!=i3)
                for (int i4=1;i4<=CONST_LEN;i4++){
                    if(i3!=i4)
                    for (int i5=1;i5<=CONST_LEN;i5++){
                        if(i4!=i5)
                        for (int i6=1;i6<=CONST_LEN;i6++){
                            if(i5!=i6)
                            for (int i7=1;i7<=CONST_LEN;i7++){
                                if(i6!=i7)
                                if(fill(i1,i2,i3,i4,i5,i6,i7))
                                        count++;
                            }
                        }
                    }
                }
            }
        }
    }
}

 bool fill(int a,int b,int c,int d,int e,int f,int g){
        int arr[] = {
                 a,b,c,34-a-b-c,
                 d,e,f,34-d-e-f,
                 34-2*a-b-c-d+f+g,g,34-e-f-g, -34+2*a+b+c+d+e-g,
                 a+b+c-f-g,34-b-e-g,-c+e+g,-a+f+g
                };
        bubble(arr);
        for(int i=0;i<CONST_LEN;i++){
            if(*(arr+i)!=*(RIGHT_ARR+i))
            return false;
        }
        return true;
}
void bubble(int* A){
    int moment;
    for(int i=CONST_LEN-1;i>0;i--)
        for(int j=0;j<i;j++)
            if(A[j]>A[j+1]){
                moment=A[j];
                A[j]=A[j+1];
                A[j+1]=moment;
            }
}
