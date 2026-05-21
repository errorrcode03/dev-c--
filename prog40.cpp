#include<iostream>
using namespace std;
int main()
{
	int num;
	int stars;
	int i,j;
	cout<<"Enter The Number Of Stars (Give Even Number >=16):\n";
	cin>>stars;
	num=stars/4;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
	
		if(i<num)
		{
			for(j=1;j<=(2*num)-(2*i+1);j++)
		{
			cout<<" ";
		}
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
			cout<<endl;
	}
	for(i=1;i<num;i++)
	{
		for(j=1;j<=num-i;j++)
		{
			cout<<"*";
		}
			if(i<num)
		{
			for(j=1;j<=(2*i-1);j++)
		{
			cout<<" ";
		}
		}
	for(j=1;j<=num-i;j++)
	{
		cout<<"*";
	}
		cout<<endl;
	}
}