//write a program which accept number from user and it's all non-factors

#include<stdio.h>

void DisplayNonFact(int iNo)
{
    int iCnt=0;
    for(iCnt=2;iCnt < iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            printf("%d \t",iCnt);
        }
    }
}
int main()
{
    int iValue =0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    DisplayNonFact(iValue);
    return 0;
}