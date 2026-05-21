#include<iostream>
using namespace std;
int main()
{
	int num;
	int i,j;
	cout<<"Enter How Many Stars Is To Print To Make a Diamond Shape :\t";
	cin>>num;
	for(i=0;i<num;i++)
	{
			for(j=0;j<num-i;j++)
		{
			cout<<" ";
		}
		cout<<"*";
		if(i>0)
		{
		for(j=1;j<(2*i);j++)
		{
			cout<<" ";
		}
		cout<<"*";
		}
		
	cout<<endl;	
	}
	for(i=0;i<num-1;i++)
	{	
	for(j=0;j<=i;j++)
		{
			cout<<" ";
		}
		cout<<"*";
	if(i!=num-1)
	{
		for(j=2*(num-i-1);j>1;j--)
		{
			cout<<" ";
		}
		cout<<"*";
            	}
		cout<<endl;		
	}
	for(i=0;i<num;i++)
	{
		cout<<" ";
	}
	cout<<"*";
	}