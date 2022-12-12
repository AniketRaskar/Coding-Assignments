//Accpect character from user and check whether it is digit or not ....
//(0-9)
#include<stdio.h> 
#define TRUE 1
#define FALSE 0
typedef int BOOL;

bool  ChkDigit(char ch)
{
       if( (ch >='0'&& ch <='9'))
       {
        return true;
       }
       else
       {
        return false;
       }
}
int main()
{
    char cValue='\0';
    bool bRet=false;
    printf("Enter the character");
    scanf("%c",&cValue);
    bRet=ChkDigit(cValue);

    if(bRet==true)
    {
        printf("It is a Digit");

    }
    else
    {
        printf("It is Not a Digit");
    }
    return 0;

}