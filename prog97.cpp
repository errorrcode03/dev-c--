#include<iostream>
#include<cmath>
using namespace std;
bool armstrong(int num)
{
	int check=num;
	int check2=num;
	int result=0;
	int exponent=0;
	
	while(num!=0)
	{
		num/=10;
		exponent++;
	}
	while(check!=0)
	{
	result +=pow((check%10),exponent);
	check/=10;
	}
	if(check2==result)
	{
		return true;
	}
	return false ;
}
int main()
{
	cout<<armstrong(153);
}