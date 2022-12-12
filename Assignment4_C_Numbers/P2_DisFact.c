//write a program which accepts number from the user and display its factor in decresing order

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt=0;
    for(iCnt=(iNo/2); iCnt>0;iCnt--)
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
    printf("Enter the number:");
    scanf("%d",&iValue);

    FactRev(iValue);
     return 0;
}