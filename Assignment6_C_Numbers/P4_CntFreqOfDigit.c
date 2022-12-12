//write a program to accept 2 the numbers from the user and count the frequency of 2nd in the first

#include <stdio.h>

int FreqOfTwo(int iNo1,int iNo2)
{
    int iDigit =0;
    int iCnt=0;
    while(iNo1>0)
    {
        iDigit=iNo1 % 10;
        if(iDigit==iNo2)
        {
            iCnt++;
        }
        iNo1 = iNo1/10;
    }
    return iCnt;
}
int main()
{
    int iValue1 =0;
    int iValue2 = 0;
    int iRet =0;
    printf("Enter the number which is to be evaluated:\n");
    scanf("%d",&iValue1);

    printf("Enter the number whose frequency to be calculated:\n");
    scanf("%d",&iValue2);

    iRet = FreqOfTwo(iValue1,iValue2);
    printf("Given number %d contains %d number of %d in it",iValue1,iRet,iValue2);
    return 0;
}