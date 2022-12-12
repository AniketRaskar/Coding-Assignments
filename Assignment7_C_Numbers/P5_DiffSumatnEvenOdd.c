//write a program which accept the no and return the difference between summaion of even and odd digits

#include <stdio.h>

int DiffEvenOdd(int iNo)
{
    int iDigit =0;
    int iSum=0;
    while(iNo>0)
    {
        iDigit=iNo % 10;
       if((iDigit%2)==0)
       {
           iSum = iSum+iDigit;
       }
       else
       {
           iSum=iSum-iDigit;
       }
       iNo = iNo/10;
    }
    return iSum;
}
int main()
{
    int iValue =0;
    int iRet =0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = DiffEvenOdd(iValue);
    printf("Difference between of sum of even and odd digits in the  number %d is %d ",iValue,iRet);
    return 0;
}