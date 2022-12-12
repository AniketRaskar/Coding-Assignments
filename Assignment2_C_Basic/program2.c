//accept one number from the user and print that number of times * on the screen using while loop
#include<stdio.h>

void Display(int iNo)
{
    while(iNo>=1)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue =0;
    printf("Enter the number \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}