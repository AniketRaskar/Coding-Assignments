#include<stdio.h>
void strNcpyX(char *src,char *dest,int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo= -iNo;
	}
	while((*src!='\0')&&(iNo!=0))
	{
		*dest=*src;
		dest++;
		src++;
		iNo--;
	}
	*dest='\0';
}

int main()
{
	char Arr[30];
	char Brr[30];
	int iNo=0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	printf("how much charater are copy\n");
	scanf("%d",&iNo);
	
	strNcpyX(Arr,Brr,iNo);
	printf("%s",Brr);
}
													
