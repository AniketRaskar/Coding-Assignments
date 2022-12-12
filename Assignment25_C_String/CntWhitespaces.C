#include<stdio.h>
//write a program which accept the string from user and count the number of white spaces
int CountWhite(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str==' ')
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
    printf("Emter the string\n");
    scanf("%[^'\n']s",Arr);
    iRet=CountWhite(Arr);
    printf("White spaces are:%d",iRet);
    return 0;

}