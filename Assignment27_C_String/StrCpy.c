//Accept the string from user and copy that string to another string
#include<stdio.h>

void strcpyX(char *src, char *dest)
{
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}



int main()
{
	
	char Arr[30];
	char Brr[30];
	
	printf("enter string\n");
	scanf("%[^'\n']s",Arr);
	
	strcpyX(Arr,Brr);
	printf("%s",Brr);
}

