//write a program which accepts the string and one character from user and counte the frequency of that charcter in string
#include<stdio.h>
int Frequency(char *str, char ch)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if(*str==ch)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	char cValue='\0';
	int iRet=0;
	
	puts("Enter the string \n");    //it also works in c in place of printf and scanf
	gets(Arr);
	
	printf("Enter the chracter\n");
	scanf("%c",&cValue);
	
	iRet=Frequency(Arr,cValue);
	printf("%d",iRet);
	
	return 0;
}
													
