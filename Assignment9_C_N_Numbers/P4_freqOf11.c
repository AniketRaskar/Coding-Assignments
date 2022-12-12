//accept N numbers from user cheak frequency of 11 in it.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int ChkEleven(int Arr[],int iLength)
{
    int iCnt =0;
    int iFrqCnt =0;
    int iSum =0;
   
    for(iCnt=0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            iFrqCnt++;
        }
       
    }
    return iFrqCnt;
}
int main()
{
    int iSize =0;
    int *iPtr =NULL;
    int iCnt=0;
    int  iRet =0;

    printf("Enter the number of elements you want to accept:\n");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize*sizeof(int));

    printf("Enter the elements:\n");

    for(iCnt=0; iCnt < iSize;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = ChkEleven(iPtr,iSize);
    printf("Number of 11 in the given numbers is %d",iRet);
   
    return 0;
}