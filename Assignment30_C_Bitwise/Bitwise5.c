
#include<stdio.h>
typedef unsigned int UINT;


UINT OffBit(int iValue)
{
	int iMask=0X000000F;
	int iResult=iValue|iMask;
	
	return iResult;
	
}


int main()
{
	int iNo=0;
	UINT iRet=0;
	
	printf("Enter the number\n");
	scanf(" %d",&iNo);
	
	iRet=OffBit(iNo);
	printf("After bit oFF number are: %d",iRet);
	
	return 0;
}


			