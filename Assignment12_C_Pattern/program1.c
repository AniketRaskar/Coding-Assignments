/*
input: 5
output:  A  B   C   D   E
*/

#include <stdio.h>

void Pattern(int iNo)
{
    char ch='\0';
    for(int i=1,ch='A';i<=iNo;i++,ch++)
    {
        printf("%c\t",ch);
    }
}
int main()
{
    int iValue =0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}