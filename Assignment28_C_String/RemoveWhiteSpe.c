//Accpet the string from user and copy that string into another by removing all the whitespaces.
#include<stdio.h>
int revwhit(char *src,char *dest)
{
	while(*src!='\0')
	{
		if(*src ==' ')
		{
			src++;
			continue;
		}
		else if((*src>='A'&&*src<='Z')||(*src>='a'&&*src<='z'))
		{
			*dest = *src;
			src++;
			dest++;
		}
	}
	dest='\0';

	
}
int main()
{
	char Arr[50];
	char Brr[50];
	
	printf("Enter the string\n");
	//scanf("%[^'\n']s",Arr);
	gets(Arr);
	revwhit(Arr,Brr);
	
	printf("String after removing whitespaces is:\n %s",Brr);
	
	return 0;
}

