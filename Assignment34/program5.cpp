#include<iostream>
using namespace std;
template <class T>
T Max(T *Arr,int iSize)
{
	T Max;
	int i=0;
	Max=*Arr;
	
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]<Max)
		{
			Max=Arr[i];
		}
	}
	
	return Max;
}
int main()
{
	int Arr[]={10,20,30,40,50};
	float Brr[]={10.3,3.7,19.8,8.7};
	
	int iRet=Max(Arr,5);
	cout<<iRet<<endl;;
	
	float fRet=Max(Brr,4);
	cout<<fRet<<endl;
	
	return 0;
}
					