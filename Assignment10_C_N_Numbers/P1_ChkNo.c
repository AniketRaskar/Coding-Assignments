//Accept N number from user and accept number as No and cheak wheather No is present or not

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define true 1
#define false 0

typedef int BOOL;

BOOL Cheak(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    bool bFlag = false;
    for(iCnt=0;iCnt <iLength;iCnt++)
    {
        if((Arr[iCnt])==iNo)
        {
            bFlag = true;
            break;;
        }
    }
    return bFlag;
}
int main()
{
    int iValue=0,iSize=0,iCnt=0;
    int *iPtr = NULL;
    bool bRet = false;

    printf("Enter the number of elements you want to accept from the user:\n");
    scanf("%d",&iSize);

    printf("Enter the number which you want to cheak:\n");
    scanf("%d",&iValue);

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
    bRet = Cheak(iPtr,iSize,iValue);
    if(bRet==1)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }
    free(iPtr);
    return 0;
}