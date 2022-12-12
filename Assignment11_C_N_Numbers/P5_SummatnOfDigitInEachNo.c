//Accept N numbers from the user and display summation of all digits in eaxh number
#include<stdio.h>
#include <stdlib.h>
void DisplayDigitSum(int Arr[],int iLength)
{
    int iCnt=0,iSum=0,iDigit=0;

    
    for(iCnt=0;iCnt <iLength;iCnt++)
    {
        iSum =0;
        while (Arr[iCnt]>0)
        {
            iDigit=Arr[iCnt]%10;
            iSum =iSum+iDigit;
            Arr[iCnt]=Arr[iCnt]/10;

        }
        printf("%d\t",iSum);
        
    }
    
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
   DisplayDigitSum(iPtr,iSize);
   
    return 0;
}