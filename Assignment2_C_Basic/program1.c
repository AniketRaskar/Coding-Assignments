//accepting number from user and printing that number of times * on the screen
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("*");
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