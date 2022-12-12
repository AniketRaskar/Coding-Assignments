//write a program which accepts string from user and it in reverse order
#include<stdio.h>

void DisplayRev(char Arr[])
{
    char *s=Arr;
    char *e=Arr;
    while(*e != '\0')
    {
        e++;
    }
    e--;
    while(s<=e)
    {
        char temp=*s;
        *s = *e;
        *e=temp;
        s++;
        e--;
    }//aniket
}
int main()
{
    char ch[20];
    printf("enter the string:\n");
    scanf("%[^'\n]s",&ch);
    DisplayRev(ch);
    printf(ch);
    return 0;
}