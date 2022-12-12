#include<stdio.h>
/*
Accept character from user and check wheather it is a special symbol or not 
(!,@,#,$,%,^,&,*).
*/
bool ChkSpecial(char ch)
{
    if(ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='^' || ch=='&' ||ch=='*')
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
    bRet=ChkSpecial(cValue);
    if(bRet==true)
    {
        printf("It is a Special Character \n");

    }
    else
    {
        printf("It is not a Special Character \n");
    }
    return 0;

}