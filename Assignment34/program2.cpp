
#include<iostream>
using namespace std;

template<class T>
T Maximum(T Value1,T Value2,T Value3)
{
	T Max=Value1;
	
	if(Value1<=Max)
	{
		Max=Value1;
		
		if(Max<Value2)
		{
			Max=Value2;
		}
		if(Max<Value3)
			{
				Max=Value3;
			}
	}
	return Max;
};

int main()
{
	int iNo1=0,iNo2=0,iNo3=0,iRet=0;
	
	cout<<"Eneter the number"<<endl;
	cin>>iNo1;
	cin>>iNo2;
	cin>>iNo3;
	
	iRet=Maximum(iNo1,iNo2,iNo3);
	cout<<iRet<<endl;
	
	float fNo1=0.0,fNo2=0.0,fNo3=0.0,fRet=0.0;
	
	cout<<"Eneter the number"<<endl;
	cin>>fNo1;
	cin>>fNo2;
	cin>>fNo3;
	
	fRet=Maximum(fNo1,fNo2,fNo3);
	cout<<fRet<<endl;
	
	char cNo1='\0',cNo2='\0',cNo3='\0',cRet='\0';
	
	cout<<"Eneter the number"<<endl;
	cin>>cNo1;
	cin>>cNo2;
	cin>>cNo3;
	
	cRet=Maximum(cNo1,cNo2,cNo3);
	cout<<cRet<<endl;
	
	return 0;
}

