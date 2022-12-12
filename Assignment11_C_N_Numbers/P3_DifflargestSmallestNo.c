//Accept N numbers from the user and return the difference between largest and smallest number of them

#include<stdio.h>
#include <stdlib.h>
int DisplayDiff(int Arr[],int iLength)
{
    int iCnt=0;
    int iMin=0,iMax=0,iDiff=0;
    iMin = Arr[0];
    iMax = Arr[0];
    for(iCnt=0;iCnt <iLength;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt]>iMax)
        {
        iMax = Arr[iCnt];
        }
    }
    
    iDiff = iMax - iMin;
    return iDiff;
}
int main()
{
    int iSize =0;
    int *iPtr =NULL;
    int iCnt=0,iRet=0;

    printf("Enter the number of elements you want to accept:\n");
    scanf("%d",&iSize);

   iPtr = (int*)malloc(iSize*sizeof(int));

   printf("Enter the elemets:\n");

   for(iCnt=0;iCnt <iSize;iCnt++)
   {
       scanf("%d",&iPtr[iCnt]);
   }
   iRet =DisplayDiff(iPtr,iSize);
   printf("Difference between the largest and smallest numbers of the given is:%d",iRet);
    return 0;
}