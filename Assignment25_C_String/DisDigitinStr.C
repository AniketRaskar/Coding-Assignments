#include<stdio.h>
/*
write a program which accepts string from user 
and display only digits from that string
*/
void DisplayDigit (char *str)
{
    while(*str!='\0')
    {   
        if( (*str >= '0') && ( *str <= '9') )
        {
            printf("%c",*str);
        }
        str++;
    }  
}
int main()
{
    char Arr[20];
    int iRet=0;
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    DisplayDigit(Arr);
   return 0;
}