#include<iostream>
using namespace std;
int main()
{
	char word[200];
	int num;
	int count=0;
	int i,j,k;
	cout<<"Enter The Maximum Numbers Characters is to be Added : \t";
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>word[i];
	}
	for(j=0;j<num;j++)
	{
		if(word[j]==word[j+1])
		{
			count++;
            cout<<word[j];
            
		}
		else 
		{
			cout<<"1"<<word[j];
		}
	}
}