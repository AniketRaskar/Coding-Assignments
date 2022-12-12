#include<stdio.h>
/*
Accept character from user and display its Ascii value in 
decimal,octal and hexadecimal;
*/
void Display(char ch )
{
        printf("Decimal value is :%d \n",ch);
        printf("Octal value is :%o \n",ch);
        printf("HexaDecimal value is :%X \n",ch);

}
int main()
{
    char cValue='0';
    printf("Enter the character:\n");
    scanf("%c",&cValue);
    Display(cValue);
    return 0;

}