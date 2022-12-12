#include<stdio.h>
//Write a recursive program  which display below pattern
//  A   B   C   D   E   F 

void Display()
{
    static char Ch='A';
    if(Ch < 'G')
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