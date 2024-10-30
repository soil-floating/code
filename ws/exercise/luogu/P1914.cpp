#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char s[100];
    scanf("%d %s",&n,s);
    for(int i=0;i<strlen(s);i++)
    {
            s[i]='a'+(s[i]-'a'+n)%26;
    }
    printf("%s\n",s);
    return 0;
}