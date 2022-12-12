#include<iostream>
using namespace std;
template<class T>
int Frequency(T *brr,int iNo,T Ser)
{	
	int iCnt=0;

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(Ser==brr[iCnt])
		{
			break;
		}
	}
	return iCnt;
}
int main()
{

	int  Arr[10]={10,20,10,40,50,10,50,10,60};
	
	int iRet=Frequency(Arr,9,50);
	cout<<iRet<<endl;
	
	char crr[10]={'z','b','c','a','d','a','f','e','A'};
	
	int iRet1=Frequency(crr,9,'a');
	cout<<iRet1<<endl;
	
	return 0;
}
										