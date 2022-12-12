#include<stdio.h>
#include<stdbool.h>
//Write a program to chk 15th bit is on or off
typedef unsigned int UINT;
                    
bool ChkBit(UINT iNo)
{
	int iMask=0X00004000;
	int iResult=0;
	iResult=iNo&iMask;
	
	if(iResult==0)
	{
		return false ;
	}
	else
	{
		return true;
	}
}


int main()
{
	int iValue =0;
	bool bRet=false;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet=ChkBit(iValue);
	
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