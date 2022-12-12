//Accept N numbers from the user and display all such numbers conataing 3 digits in it
#include<stdio.h>
#include <stdlib.h>
void DisplayNo(int Arr[],int iLength)
{
    int iCnt=0;
    
   
    for(iCnt=0;iCnt <iLength;iCnt++)
    {
      int iTemp=Arr[iCnt];
        int iDigitCnt=0;
       while(Arr[iCnt]>0)
       {
           iDigitCnt++;
          
           Arr[iCnt]=Arr[iCnt]/10;
           
          
       }
      
       if(iDigitCnt==3)
       {
           printf("%d\t",iTemp);
       }
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
   DisplayNo(iPtr,iSize);
   
    return 0;
}