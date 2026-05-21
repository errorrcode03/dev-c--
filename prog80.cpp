#include<iostream>
using namespace std ;
long long int expo(long long int number, int e)
{
	long long result=1;
	for(int i=1;i<=e;i++)
	{
		result*=number;
	}
return result;
}
int main()
{
	long long int value;
	cout<<"Enter Number :\t";
	cin>>value;
	int ex;
	cout<<"Enter Exponential Value :\t";
	cin>>ex;
	cout<<value<<"^"<<ex<<" = "<<expo(value,ex)<<endl;
}