#include<iostream>
using namespace std;
int calculator()
{
	int a;
	int b;
	int sum=a+b;
	int multiply=a*b;
	int divide=a/b;
	int subtraction=a-b;
	return sum;
	
}
int main()
{
	int work;
	int ab ,bc;
	cout<<"Enter the first number :\n";
	cin>>ab;
	cout<<"Enter the second numbber :\n";
	cin>>bc;
	cout<<"Enter the work do you want to do \n";
	cin>>work;
	cout<<calculator();
	
}