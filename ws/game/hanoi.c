#include<stdio.h>
void hanoi(char A,char B,char C,int n){
	if(n==1)
		printf("%c -> %c\n",A,C);
	else{
		hanoi(A,C,B,n-1);
		printf("%c -> %c\n",A,C);
		hanoi(B,A,C,n-1);
	}
}
int main(void){
	char a = 'A';
	char b = 'B';
	char c = 'C';
	int n;
	printf("Enter your level of hanoi tower:");
	scanf("%d",&n);
	printf("\n");
	hanoi(a,b,c,n);
}
