#include<iostream>
using namespace std;
template<class T>
T SumN(T *Arr ,int iNo)
{
	T Sum=0.0;
	int i=0;
	for(i=0;i<iNo;i++)
	{
		Sum=Sum+Arr[i];
	}
	return Sum;
}
int main()
{
	int Arr[]={10,20,30,40,50};
    float Brr[]={10.3,3.7,9.8,8.7};
	
	int iRet=SumN(Arr,5);
	cout<<" "<<iRet<<endl;
	float fRet=SumN(Brr,4);
	cout<<" "<<fRet<<endl;
	
	return 0;
}
