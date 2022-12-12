#include<iostream>
using namespace std;

template<class T>
void Display(T Value,int iNo)
{
	for(int iCnt=1;iCnt<=iNo;iCnt++)
	{
		cout<<Value<<endl;
	}

}

int main()
{
	char ch='\0';
	int iValue;
	cout<<"Eneter the element"<<endl;
	cin>>ch;
	
	cout<<"Eneter the number"<<endl;
	cin>>iValue;
	
	Display(ch,iValue);
	
	int iNo='\0';
	int iValue1;
	cout<<"Eneter the element"<<endl;
	cin>>iNo;
	
	cout<<"Eneter the number"<<endl;
	cin>>iValue1;
	
	Display(iNo,iValue1);
	
	float fNo='\0';
	float	fValue;
	cout<<"Eneter the element"<<endl;
	cin>>fNo;
	
	cout<<"Eneter the number"<<endl;
	cin>>fValue;
	
	Display(fNo,fValue);

	return 0;
}
