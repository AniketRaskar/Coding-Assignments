#include<stdio.h>
#include<stdbool.h>
//chk wheather 7th 15th 21st and 27th bit are on or off
typedef unsigned int UINT;
bool ChekBit(UINT iNo)
{
	int iMask=0X08104040;
	int iResult=0;
	//7 15 21 28  0X08104040
	iResult=iNo&iMask;
	
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

