#include<stdio.h>
/*
write a program which accepts string from user and count 
number of small characters.
*/
int CountSmall(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if( ( *str >= 'a' ) && ( *str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
    
}
int main()
{
    char Arr[20];
    int iRet=0;
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    iRet=CountSmall(Arr);
    printf("%d",iRet);

    return 0;
}