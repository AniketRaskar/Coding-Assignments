//write a program to accept a number from the user cheack it contains 0 in it or not

#include <stdio.h>
#include <stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit =0;
    bool bFlag = false;
    while(iNo > 0)
    {
        iDigit=iNo %10;
        if(iDigit==0)
        {
            bFlag =true;
            break;
        }
        iNo = iNo/10;
    }
    return bFlag;

}
int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    if(bRet==true)
    {
        printf("Number contains zero");
    }
    else
    {
        printf("Number does not contains zero");
    }

    return 0;
}