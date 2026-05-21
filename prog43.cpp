#include<iostream>
using namespace std;
int main()
{
	int gcd[100];
	int fact;
	cout<<"Enter The Two Numbers : \n";
	for(int i=0;i<=1;i++)
	{
		cin>>gcd[i];
	}
	for(int j=1;j<=100;j++)
	{
		if(gcd[0]%j==0 && gcd[1]%j==0)
		{
		fact=j;
		fact*j;	
		continue;
		}
	}
	cout<<"GCD of The Two Numbers is : \n"<<fact;
	return 0;
}