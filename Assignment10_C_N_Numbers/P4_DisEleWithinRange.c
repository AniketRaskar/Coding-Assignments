//Accept N number from user and accept Range and display all elements within this range

#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[],int iLength,int iNo1,int iNo2)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt <iLength;iCnt++)
    {
        if((Arr[iCnt]>=iNo1) && (Arr[iCnt]<=iNo2))
        {
           printf("%d\t",Arr[iCnt]);
        }
         
    }
    
}
int main()
{
    int lRange=0,hRange=0,iSize=0,iCnt=0;
    int *iPtr = NULL;
   
    printf("Enter the number of elements you want to accept from the user:\n");
    scanf("%d",&iSize);

    printf("Enter the lowest range:\n");
    scanf("%d",&lRange);

    printf("Enter the highest range:\n");
    scanf("%d",&hRange);

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
    Range(iPtr,iSize,lRange,hRange);
    
    free(iPtr);
    return 0;
}