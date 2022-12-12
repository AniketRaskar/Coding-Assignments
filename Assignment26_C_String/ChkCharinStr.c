//write a program which accepts the string and one character from user,and chk that character in that string.
#include<stdio.h>
#include<stdbool.h>
bool ChkChar(char *srt,char ch)
{
	while(*srt!='\0')
	{
		if(*srt==ch)
		{
			break;
		}
		srt++;
	}
	if(*srt=='\0')
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	char Arr[30];
	bool bRet=false;
	char cValue='\0';
	
	puts("Enter the string\n");
	gets(Arr);
	
	printf("Enter the\n");
	scanf("%c",&cValue);
	
	bRet=ChkChar(Arr,cValue);
	if(bRet==true)
	{
		printf("the character present\n");
	}
	else
	{
		printf("The character not present\n");
	}
	
	return 0;
}
													
