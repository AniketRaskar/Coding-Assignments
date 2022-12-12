#include<iostream>
using namespace std;

template<class T>
void Reverse(T *Arr,int iSize)
{
	int Start=0;
	int End=iSize;
	T temp=Start;
	while(Start<End)
	{
		temp=Arr[Start];
		Arr[Start]=Arr[End];
		Arr[End]=temp;
		Start++;
		End--;
	}
}
int main()
{
	int Arr[10]={10,20,30,10,30,40,10,40,10};
	float brr[10]={10.3,20.3,30.3,10.3,30.3,40.3,10.3,40.3};
	char crr[10]={'z','b','c','a','d','a','f','e','A'};
	
	Reverse(Arr,8);
	for(int i=0;i<=8;i++)
	{
		cout<<i<<" "<<Arr[i]<<endl;
	}

	
	Reverse(brr,7);
	for(int i=0;i<=7;i++)
	{
		cout<<i<<" "<<Arr[i]<<endl;
	}

	
	Reverse(crr,8);
	for(int i=0;i<=8;i++)
	{
		cout<<i<<" "<<Arr[i]<<endl;
	}

	return 0;
}

