#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void list(int * a,int i){
    for(int j=i;j<9-i;j++){
        //*(a+i)=*(a+(i+1));
        a[i]=a[i+1];
    }
}
int main(void){
    system("rand.exe > list.txt");
    system("rand.exe > stdin");
    srand((unsigned)time(NULL));
    int a[9];
    int b[3];
    for(int i=0;i<9;i++)
        a[i] = i+1;
    for(int i=0;i<3;i++){
        int n = rand()%(9-i);
        b[i] = a[n];
        list(a,n);
    }
    for(int i=0;i<3;i++)
        printf("第%d组\n",b[i]);
    return 0;
}