//write a program which accepts one string from the user and copy cappital cahracters from that string to the another string.			
#include<stdio.h>
void strCpyCap(char *src,char *dest)
{
	while(*src!='\0')
	{
		if((*src>='A')&&(*src<='Z'))
		{
			*dest=*src;
			dest++;
		}
		src++;
	}
	*dest='\0';
}
int main()
{
	char Arr[30];
	char Brr[30];
	
	printf("Enter string\n");
	scanf("%[^'\0']s",Arr);
	
	strCpyCap(Arr,Brr);
	printf("%s",Brr);
	
	return 0;
}
