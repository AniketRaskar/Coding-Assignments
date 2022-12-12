#include<stdio.h>
#include<stdbool.h>
int strrev(char *str,char *dest)
{
	char* copy=str;
	char *first=str;
	char *end=str;
	char temp='\0';
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(first<end)
	{
		temp=*first;
		*first=*end;
		*end=temp;
		first++;
		end--;
	}
	str='\0';
	
	while(*copy!='\0') 
	{
		*dest=*copy;
		
		dest++;
		copy++;
	}
	*dest='\0';
}

int main()
{
	char Arr[202];
	char Brr[202];
	
	printf("enter the first string\n");
	gets(Arr);
	
	strrev(Arr,Brr);
	
	printf(" connect string after end first string is  :%s\n",Brr);	
	return 0;
}



