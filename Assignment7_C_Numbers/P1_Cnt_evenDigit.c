//write a program which accept number from the user and return count of even digits

#include <stdio.h>

int CntEven(int iNo)
{
    int iDigit =0;
    int iCnt=0;
    while(iNo>0)
    {
        iDigit=iNo % 10;
        if((iDigit%2)==0)
        {
            iCnt++;
        }
        iNo = iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue =0;
    int iRet =0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = CntEven(iValue);
    printf("Given number %d contains %d number of even no in it",iValue,iRet);
    return 0;
}