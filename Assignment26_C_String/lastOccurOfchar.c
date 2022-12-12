//write a program which accepts one string and one character from the user and give the lastoccurance of that character in the string.			
#include<stdio.h>
int LastChar(char *str,char ch)
{
	int iCnt=0,index=-1;
	
	while(*str!='\0')
	{
		iCnt++;
		if(*str==ch)
		{
			index=iCnt;
		}
		str++;
	}
	return index;
	
}
int main()
{
	char Arr[20];
	int iRet=0;
	char ch='\0';
	
	puts("Enter the string\n");
	gets(Arr);
	
	printf("Enter the character\n");
	scanf("%c",&ch);
	
	iRet=LastChar(Arr,ch);
	printf("Character location is %d ",iRet);
	
	return 0;
}
