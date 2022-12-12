#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool ChekBit(UINT iNo)
{
	int iMask=0X80000001;
	int iResult=0;
	
	iResult=iNo&iMask;
	printf(" %d",iResult);
	if(iResult==0)
	{
		return false;
	}
	else
	{
		return true;
	}
	
}
int main()

{
	int iValue=0;
	bool bRet=false;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet=ChekBit(iValue);
	
	if(bRet==true)
	{
		printf("Bit is ON\n");
	}
	else
	{
		printf("Bit is OFF\n");
	}
	
	return 0;
}
