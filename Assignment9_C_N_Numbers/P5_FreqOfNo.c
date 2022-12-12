//accept N numbers from user and accept one number and cheak frequency of that number in it.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int FreqOfNumber(int Arr[],int iLength,int iNo)
{
    int iCnt =0;
    int iFrqCnt =0;
    int iSum =0;
   
    for(iCnt=0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFrqCnt++;
        }
       
    }
    return iFrqCnt;
}
int main()
{
    int iSize =0;
    int iValue=0;
    int *iPtr =NULL;
    int iCnt=0;
    int  iRet =0;

    printf("Enter the number of elements you want to accept:\n");
    scanf("%d",&iSize);

    printf("Enter the number whose frequency you have to find:\n");
    scanf("%d",&iValue);

    iPtr = (int*)malloc(iSize*sizeof(int));

    printf("Enter the elements:\n");

    for(iCnt=0; iCnt < iSize;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = FreqOfNumber(iPtr,iSize,iValue);
    printf("Number of %d in the given numbers is %d",iValue,iRet);
   
    return 0;
}