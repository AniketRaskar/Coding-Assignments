//Accept the N numbers from the user and give the differecne between frequency of even and odd numbers in it

#include <stdio.h>
#include <stdlib.h>

int DiffFreqEvenOdd(int Arr[],int iLength)
{
    int iCnt =0;
    int iEven =0,iOdd=0;
    for(iCnt=0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }
    return (iEven-iOdd);
}
int main()
{
    int iSize =0;
    int *iPtr =NULL;
    int iCnt=0;
    int iRet =0;

    printf("Enter the number of elements you want to accept:\n");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize*sizeof(int));

    printf("Enter the elements:\n");

    for(iCnt=0; iCnt < iSize;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = DiffFreqEvenOdd(iPtr,iSize);
    printf("Difference between frequency of even and odd is:%d",iRet);

    return 0;
}