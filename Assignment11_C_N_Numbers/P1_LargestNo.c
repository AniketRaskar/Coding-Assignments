//Accept N numbers from the user and return largest number of them

#include<stdio.h>
#include <stdlib.h>
int DisplayLargest(int Arr[],int iLength)
{
    int iCnt=0;
    int iMax=0;
    iMax = Arr[0];
    for(iCnt=0;iCnt <iLength;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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
   iRet =DisplayLargest(iPtr,iSize);
   printf("Largest element of the given numbers is:%d",iRet);
    return 0;
}