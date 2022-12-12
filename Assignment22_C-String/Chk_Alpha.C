//Accpect character from user and check whether it is an alphabate or not....
//(A-Z a-z)
#include<stdio.h> 
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

bool  ChkAlpha(char ch)
{
       if( (ch >= 'A'&& ch <= 'Z') || (ch >= 'a' && ch <= 'z')  )
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
    printf("Enter the character\n");
    scanf("%c",&cValue);
    bRet=ChkAlpha(cValue);

    if(bRet==true)
    {
        printf("It is a Character");

    }
    else
    {
        printf("it is not a character");
    }
    return 0;

}