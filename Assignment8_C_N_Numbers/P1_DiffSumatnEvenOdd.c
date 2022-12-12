//Accept N numbers from the user and find the difference between summation of even and odd numbers of the numbers

#include <stdio.h>
#include<stdlib.h>

int DiffEvenOdd(int Arr[],int iLength)
{
    int iCnt =0;
    int iSum=0;

    for(iCnt=0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iSum = iSum + Arr[iCnt];
        }
        else
        {
            iSum = iSum - Arr[iCnt];
        }
    }
    return iSum;
}
int main()
{
    int iCnt =0,iRet=0;
    int iSize =0;
    int *iPtr =NULL;

    printf("Enter the number of elements we want to accept:\n");
    scanf("%d",&iSize);

    iPtr = (void*)malloc(iSize*sizeof(int));

    printf("Enter the elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }
    iRet = DiffEvenOdd(iPtr,iSize);
    printf("Difference between summation of even and odd numbers is %d",iRet);
    return 0;
}
