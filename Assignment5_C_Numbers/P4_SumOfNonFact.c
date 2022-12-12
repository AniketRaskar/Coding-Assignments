//write a program which accept number from user and dispaly sum of all non-factors

#include<stdio.h>

int DisplayNonFact(int iNo)
{
    int iCnt=0;
    int iSum =0;
    for(iCnt=2;iCnt < iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            iSum = iSum+iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue =0;
    int iRet=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet= DisplayNonFact(iValue);
    printf("Summation of all non-factors of %d is %d",iValue,iRet);
    return 0;
}