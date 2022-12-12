
#include<stdio.h>
typedef unsigned int UINT;
UINT ToggleBit(int iValue)
{
	int iMask=0X0000040;
	int iResult=iValue^iMask;
	return iResult;
	
}


int main()
{
	int iNo=0;
	UINT iRet=0;
	
	printf("Enter the number\n");
	scanf(" %d",&iNo);
	
	iRet=ToggleBit(iNo);
	printf("After bit oFF number are: %d",iRet);
	
	return 0;
}

