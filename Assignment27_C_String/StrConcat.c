////write a program which accepts two string from the user and concat the second string after the first string.			
#include<stdio.h>
void strcatX(char *src,char *dest)
{
	while(*src!='\0')
	{
		src++;
	}

	while(*dest!='\0')
	{
		*src=*dest;
		src++;
		dest++;
	}
	*src='\0';
}
int main()
{
	char Arr[30];
	char Brr[30];
	
	puts("Enter the string\n");
	gets(Arr);
	
	puts("Enter the second string\n");
	gets(Brr);

	strcatX(Arr,Brr);
	printf("%s",Arr);
	return 0;
}
													
