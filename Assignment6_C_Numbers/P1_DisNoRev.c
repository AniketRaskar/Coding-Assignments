//accept the no from user and display the digits in reverse order
#include<stdio.h>

void DisplayRev(int iNo)
{
    int iDigit=0;
    while(iNo>0)
    {
        iDigit = iNo%10;
        printf("%d \n",iDigit);
        iNo = iNo/10;
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    DisplayRev(iValue);
    return 0;
}