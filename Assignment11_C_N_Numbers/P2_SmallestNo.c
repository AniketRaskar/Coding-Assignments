//Accept N numbers from the user and return smallest number of them

#include<stdio.h>
#include <stdlib.h>
int DisplaySmallest(int Arr[],int iLength)
{
    int iCnt=0;
    int iMin=0;
    iMin = Arr[0];
    for(iCnt=0;iCnt <iLength;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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
   iRet =DisplaySmallest(iPtr,iSize);
   printf("Smallest element of the given numbers is:%d",iRet);
    return 0;
}