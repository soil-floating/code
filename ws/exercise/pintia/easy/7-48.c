//7-48 加密器，先后输入一个大写字母和两个小写字母，将其加密（小写字母转换为对应的大写字母，大写字母转换为对应的小写字母）后输出
#include<stdio.h>
int main()
{
    char* stringA = malloc(4*sizeof(char));
    scanf("%s",stringA);
    printf("加密后的结果是：");
    for(int i=0;i<3;i++)
        i?printf("%c",*(stringA+i)-32):printf("%c",*(stringA+i)+32);
    printf("\n");
    free(stringA);
    return 0;
}