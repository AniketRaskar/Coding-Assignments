//write a program which accepts number from user and return difference between summations of its factors and non factors

#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt=0;
    int iFSum=0;
    int iNFSum=0;
    int sum=0;
    if(iNo<0)
    {
        iNo  = -iNo;
    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iFSum=iFSum+iCnt;
        }
        else
        {
            iNFSum=iNFSum+iCnt;
        }
    }
    
    sum=iFSum - iNFSum;
    return sum;
    
}
int main()
{
    int iValue =0;
    int iRet=0;
    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);
    printf("Diffence between summation of fators and non-factors of %d is %d",iValue,iRet);


    return 0;
}