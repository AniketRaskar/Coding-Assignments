#include<iostream>
using namespace std;

template<class T>
int Frequency(T brr[],int iNo,T Ser)
{	
	int freq=0;

	for(int iCnt=0;iCnt<iNo;iCnt++)
	{
		if(Ser==brr[iCnt])
		{
			freq++;
		}
	}
	return freq;
}
int main()
{

	int Arr[10]={10,20,30,10,30,40,10,40,10};
	
	int iRet=Display(Arr,9,10);
	cout<<iRet<<endl;
	
	char crr[10]={'a','b','c','a','d','a','f','e','A'};
	
	int iRet1=Frequency(crr,9,'a');
	cout<<iRet1<<endl;
	
	return 0;
}

										