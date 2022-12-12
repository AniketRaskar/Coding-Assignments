//write a program which accepts one string and one character from the user and give the firstoccurance of that character in the string.			
#include<stdio.h>
int FirstChar(char *str,char ch)
{
	int iCnt=0,index=-1;
	
	while(*str!='\0')
	{
		if(*str==ch)
		{
			index=iCnt;
			break;
		}
		iCnt++;
		str++;
	}
	return index;
}

int main()
{
	char Arr[20];
	int iRet=0;
	char cValue='\0';
	
	puts("Enter the string\n");
	gets(Arr);
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	iRet=FirstChar(Arr,cValue);
	printf("Character location is %d ",iRet);
	
	return 0;
}