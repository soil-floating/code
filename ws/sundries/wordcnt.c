/*
	windows移植
*/

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdlib.h>
int main(void){
	system("chcp 65001");
	system("cls");
	//bool IfInLoop = false;
	char ch;//存储字符
	char Ifrtch = EOF;//存储终止符号前的一个字符
	unsigned long NumberAlphas = 0;//记录字符数
	unsigned int NumberWords = 0;//记录单词数
	unsigned int NumberLines = 0;//记录完整行数
	unsigned int LessNumLines = 0;
	bool SpaceChar = false;//如果ch为空格，值为false
	printf("这是一个计数程序，包括字符数，单词数，完整行数，不完整行数\n输入ctrl+b终止运行(注意终端默认为行缓冲)\n\n\n\n\n\n");
	while(!((ch = getchar()) == 2 && iscntrl(ch))){
		//IfInLoop = true;
		NumberAlphas++;//字符计数
		if(ch == '\n')    NumberLines++;//完整行计数
		if(!isspace(ch) && !SpaceChar){//单词开头
			NumberWords++;
			SpaceChar = true;
		}
		if(isspace(ch) && !isspace(Ifrtch))    SpaceChar = false;//单词结尾，提防出现连续空白
		Ifrtch = ch;//记录前一个字符，尤其判断是否有非完整行
	}
	printf("字符个数%ld\n单词个数%d\n完整行数%d\n",NumberAlphas,NumberWords,NumberLines);
	if(Ifrtch != '\n' /*&& IfInLoop*/)    LessNumLines++;        
	printf("不完整行数%d\n",LessNumLines);
	system("pause");
	return 0;
}
