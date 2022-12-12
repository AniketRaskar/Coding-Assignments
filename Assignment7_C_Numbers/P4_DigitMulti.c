//write a program which accept number from the user and return multiplication of all digits in it

#include <stdio.h>

int CntEven(int iNo)
{
    int iDigit =0;
    int iCnt=0;
    int iMult=1;
    while(iNo>0)
    {
        iDigit=iNo % 10;
        iMult = iMult*iDigit;
        iNo = iNo/10;
    }
    return iMult;
}
int main()
{
    int iValue =0;
    int iRet =0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = CntEven(iValue);
    printf("Multi of digits in the  number %d is %d ",iValue,iRet);
    return 0;
}