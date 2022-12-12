//Write a program which accepts number from the user and print even factors of that no on the screen

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt=0;
    if(iNo<=0)
    {
        iNo =-iNo;
    }
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iCnt % 2)==0)
        {
            if((iNo%iCnt)==0)
            {
                printf("%d \t",iCnt);
            }

        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number:");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    return 0;
}