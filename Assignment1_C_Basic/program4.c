//accept the number from the user cheak wheather it is divisible by 5 or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Cheak(int iNo)
{
    if((iNo % 5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet = FALSE;
    printf("Enter the number \n");
    scanf("%d",&iValue);

    bRet= Cheak(iValue);
    if(bRet == TRUE)
    {
        printf("Number is divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }
    return 0;
}