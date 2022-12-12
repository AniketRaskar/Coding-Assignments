//accept N numbers from user cheak wheather it contains 11 in it or not

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ChkEleven(int Arr[],int iLength)
{
    int iCnt =0;
    int iSum =0;
    bool bFlag = false;
    for(iCnt=0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            bFlag = true;
            break;
        }
       
    }
    return bFlag;
}
int main()
{
    int iSize =0;
    int *iPtr =NULL;
    int iCnt=0;
    bool bRet =0;

    printf("Enter the number of elements you want to accept:\n");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize*sizeof(int));

    printf("Enter the elements:\n");

    for(iCnt=0; iCnt < iSize;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    bRet = ChkEleven(iPtr,iSize);
    if(bRet == true)
    {
        printf("Given numbers contain 11 in that");
    }
    else
    {
        printf("Given numbers does not contain 11 in it");
    }

    return 0;
}