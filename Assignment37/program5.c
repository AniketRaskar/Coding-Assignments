#include<stdio.h>
//Write a recursive program  which display below pattern
//  a   b   c   d   e   f

void Display()
{
    static char Ch='a';
    if(Ch < 'g')
    {
        printf("%c\t",Ch);
        Ch++;
    }
    Display();
}
int main()
{ 
    Display();
    return 0;
}