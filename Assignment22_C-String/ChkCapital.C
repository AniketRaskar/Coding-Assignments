//Accpect character from user and check whether it is capital or not....
//(A-Z)
#include<stdio.h> 
#define TRUE 1
#define FALSE 0
typedef int BOOL;

bool  ChkCapital(char ch)
{
       if( (ch >= 'A' && ch <= 'Z'))
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
    printf("Enter the character:\n");
    scanf("%c",&cValue);
    bRet=ChkCapital(cValue);


    if(bRet==true)
    {
        printf("It is Capital Character");

    }
    else
    {
        printf("it is not a Capital character");
    }
    return 0;

}