//Accept two numbers from the user and display first number second number of times
#include<stdio.h>

void Display(int iNo1,int iNo2)
{
    int iCnt=0;
    for(iCnt=iNo2;iCnt>=1;iCnt--)
    {
        printf("%d \t",iNo1);
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter the first number \n");
    scanf("%d",&iValue1);

    printf("Enter the second number \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
}