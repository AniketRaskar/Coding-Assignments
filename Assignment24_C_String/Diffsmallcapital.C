#include<stdio.h>
/*
write a program which accepts string from  user and retrun 
the difference between frequency of small characters 
and fequency of capital characters
*/
int Difference (char *str)
{
    int iCnt=0;
    int jCnt=0;
    int iDiff=0;
    while(*str!='\0')
    {
        if( ( *str >= 'a' ) && ( *str <= 'z'))
        {
            iCnt++;
        }

        else if( ( *str >= 'A' ) && ( *str <= 'Z'))
        {
            jCnt++;
        }

        str++;
    }
    iDiff=iCnt-jCnt;
    return iDiff;
    
}
int main()
{
    char Arr[20];
    int iRet=0;
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    iRet=Difference(Arr);
    printf("%d",iRet);
    return 0;
}