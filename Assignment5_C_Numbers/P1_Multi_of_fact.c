//accept the number from the user and display multiplication of it's factors 

#include <stdio.h>

int DisplayFactMulti(int iNo)
{
    int iCnt=0;
    int iMulti=1;

    for(iCnt=2; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iMulti = iMulti * iCnt;
        }
    }
    return iMulti;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet= DisplayFactMulti(iValue);

    iRet = printf("Multiplication of factors of the number %d is %d",iValue,iRet);

    return 0;
}

// Complexivity of this program is n/2.