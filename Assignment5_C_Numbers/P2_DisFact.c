//write a program which accepts the number from user and display it'sfactor in decresing order.

#include <stdio.h>

void DisplayRevFact(int iNo)
{
    int iCnt=0;
    for(iCnt=(iNo/2);iCnt >=1;iCnt--)
    {
        if((iNo % iCnt)==0)
        {
            printf("%d \t",iCnt);
        }
    }
}
int main()
{
    int iValue =0;
    printf("Enter the number: \n");
    scanf("%d",&iValue);

    DisplayRevFact(iValue);
    return 0;
}