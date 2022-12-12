//Accept N numbers from the user and display all such elements which are multiples of 11.

#include <stdio.h>
#include<stdlib.h>

void DisplayDivEleven(int Arr[],int iLength)
{
    int iCnt =0;

    for(iCnt=0;iCnt < iLength;iCnt++)
    {
        if(((Arr[iCnt]%11)==0))
        {
            printf("%d \t",Arr[iCnt]);
        }
    }
}
int main()
{
    int iCnt =0;
    int iSize =0;
    int *iPtr =NULL;

    printf("Enter the number of elements we want to accept:\n");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize*sizeof(int));

    printf("Enter the elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }
    DisplayDivEleven(iPtr,iSize);
    
    return 0;
}
