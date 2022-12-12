//Accept N number from user and accept number as No and return the last index of No

#include <stdio.h>
#include <stdlib.h>

int FirstOccur(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    
    for(iCnt=Arr[iLength-1];iCnt >=0;iCnt--)
    {
        if(((Arr[iCnt])==iNo))
        {
           break;;
        }
         
    }
    return iCnt;
    
}
int main()
{
    int iValue=0,iSize=0,iCnt=0;
    int *iPtr = NULL;
    int iRet =0;

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
    iRet = FirstOccur(iPtr,iSize,iValue);
    printf("Index of %d is %d from the given numbers",iValue,iRet);
    free(iPtr);
    return 0;
}