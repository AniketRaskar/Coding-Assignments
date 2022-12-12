//accept the string from userr and copy that string tom another string by converting it into upper case
#include<stdio.h>
int strcpyX(char *src,char *dest)
{
	
	while(*src!='\0')
	{
		if((*src>='a')&&(*src<='z'))
		{
			*src=*src-32;	
		}
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
}
int main()
{
	char Arr[300];
	char Brr[300];
	
	puts("Enter the string\n");
	gets(Arr);
	
	strcpyX(Arr,Brr);
	printf("%s",Brr);
	return 0;
}


