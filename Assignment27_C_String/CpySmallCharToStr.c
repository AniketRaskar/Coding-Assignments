#include<stdio.h>
// copy the small charcater in anthor string.

void StrcypSml(char *src, char *dest)
{
	while(*src!='\0')
	{
		if((*src>='a')&&(*src<='z'))
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
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	StrcypSml(Arr,Brr);
	printf("%s",Brr);
	
	return 0;
}