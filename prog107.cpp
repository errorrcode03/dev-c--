#include<iostream>
using namespace std;
int main()
{
	long long int nums;
	cin>>nums;
	int fibo=0;
	int lastNum=1;
	int secondLast=0;
	if(nums==0)
	{
		fibo=0;
	}
	if(nums==1)
	{
		fibo=1;
	}
	if(nums>1)
	{
	for(int i=2;i<=nums;i++)
	{
		fibo=lastNum+secondLast;
		secondLast=lastNum;
		lastNum=fibo;
	}
}
	cout<<"fibo : "<<fibo<<endl;
	return 0;
}