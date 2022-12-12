#include<stdio.h>
/*
Accpet character from user .
if  it is capital then display all the characters from input character till Z.
if input character is small then print all the character in reverse order till a.
in other cases return directly.
*/
void Display(char ch)
{

    if( (ch >='a') && (ch <='z'))
    {
        for(ch; ch>='a';ch--)
        {
            printf("%c\t",ch);
        }
    }
    else if( (ch >='A') && (ch <='Z'))
    {
        
        for(ch; ch<='Z' ; ch++)
        {
            printf("%c\t",ch);
        }
    }
    else
    {
        return;
    }


}
int main()
{
    char cValue='\0';
    printf("Enter the character:\n");
    scanf("%c",&cValue);
    Display(cValue);
    return 0;

}