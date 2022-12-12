//write a program to accept the number from the user and count the frequency of 2 in it

#include <stdio.h>

int FreqOfTwo(int iNo)
{
    int iDigit =0;
    int iCnt=0;
    while(iNo>0)
    {
        iDigit=iNo % 10;
        if(iDigit==2)
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

    iRet = FreqOfTwo(iValue);
    printf("Given number %d contains %d number of 2 in it",iValue,iRet);
    return 0;
}