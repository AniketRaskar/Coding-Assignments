#include<stdio.h>
/*
write a program which accepts string from user 
and toggle the case.
*/
void struprX (char *str)
{
    while(*str!='\0')
    {
        if( ( *str >= 'a' ) && ( *str <= 'z'))
        {
            *str = *str - 32;
            
        }
        else  if( ( *str >= 'A' ) && ( *str <= 'Z'))
        {
            *str = *str + 32;
            
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
    struprX(Arr);
    printf("Modified String is :%s\n",Arr);
   return 0;
}