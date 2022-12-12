//Accept N number from user and return product of all odd numbers
#include <stdio.h>
#include <stdlib.h>

int ProductOdd(int Arr[],int iLength)
{
    int iCnt=0;
    int iMult =1;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(((Arr[iCnt])%2)!=0)
        {
           iMult = iMult * Arr[iCnt];
        }
         
    }
    return iMult;
    
}
int main()
{
    int iSize=0,iCnt=0;
    int *iPtr = NULL;
    int iRet =0;

    printf("Enter the number of elements you want to accept from the user:\n");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize*sizeof(int));

    if(iPtr==NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    printf("Enter the elements:\n");

    for(iCnt=0;iCnt <iSize;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }
    iRet = ProductOdd(iPtr,iSize);
    printf("Product of all numbers is:%d",iRet);
    free(iPtr);
    return 0;
}