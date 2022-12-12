
#include<iostream>
using namespace std;

template<class T>
T Multiply(T iValue1, T iValue2)
{
	T Ans;
	Ans=iValue1*iValue2;
	return Ans;
}
int main()
{
	int iNo1=0,iNo2=0,iRet=0;
	
	cout<<"Eneter the number"<<endl;
	cin>>iNo1;
	cin>>iNo2;
	
	iRet=Multiply(iNo1,iNo2);
	cout<<iRet<<endl;
	
	float fNo1=0,fNo2=0,fRet=0;
	
	cout<<"Eneter the number"<<endl;
	cin>>fNo1;
	cin>>fNo2;
	
	fRet=Multiply(iNo1,iNo2);
	cout<<fRet<<endl;
	
	return 0;
}
