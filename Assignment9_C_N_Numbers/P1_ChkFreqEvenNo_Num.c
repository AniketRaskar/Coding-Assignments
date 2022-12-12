//Accept N numbers from user and return frequency of even numbers in it

#include <stdio.h>
#include<stdlib.h>
int FreqEven(int Arr[],int iLength)
{
    int iCnt=0;
    int FreqCnt =0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            FreqCnt++;
        }
    }
    return FreqCnt;
}
int main()
{
    int iCnt =0,iRet =0;
    int iSize =0;
    int *iPtr = NULL;
    printf("Enter the number of elements you want to accept:\n");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize*sizeof(int));
    printf("Enter the elements:\n");

    for(iCnt=0;iCnt < iSize;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }
    iRet = FreqEven(iPtr,iSize);

    printf("Numbers of even numbers in the given elemnts is %d",iRet);

    return 0;
}