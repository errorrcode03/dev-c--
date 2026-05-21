#include<iostream>
using namespace std;
int main()
{
	//getting fibonacci series upto 1000
	long long int lastElm=0;
	long long int secondLast=1;
	long long int result=0;
	cout<<lastElm<<" "<<secondLast<<" ";
while(result<=1000)
	{
		result=secondLast+lastElm;
	cout<<result<<" ";
	lastElm=secondLast;
	secondLast=result;
	  }
	return 0;
}