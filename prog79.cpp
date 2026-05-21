#include<iostream>
using namespace std ;
long long int fact(long long int number)
{
	long long int val=1;
	for(int i=1;i<=number;i++)
	{
		val*=i;
	}
	return val;
}
int main()
{
	long long int value;
	cout<<"Enter the number :\t";
	cin>>value;
	cout<<"The Factorial value is : "<<fact(value)<<endl; 
	return 0;
}