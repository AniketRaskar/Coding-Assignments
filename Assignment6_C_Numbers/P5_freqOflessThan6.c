//write a program which accept the number from the user and count frequency of such digit which are less than 6

#include<stdio.h>
int FreqLessThanSix(int iNo)
{
    int iDigit =0;
    int iCnt=0;
    while(iNo>0)
    {
        iDigit=iNo % 10;
        if(iDigit <6)
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

    iRet = FreqLessThanSix(iValue);
    printf("Given number %d contains %d number of digits less than 6 in it",iValue,iRet);
    return 0;
}