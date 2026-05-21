#include<iostream>
using namespace std ;
int main()
{
	char str[100];
	cin.getline(str,100);
	int count=0;
	int size =0;
	while(str[size]!='\0')
	{
		size++;
	}
	for(int i=0;i<size;i++)
	{
		cout<<str[i];
		count++;
		if(count==2)
		{
			cout<<" ";
			count=0;
		}
	}
	}