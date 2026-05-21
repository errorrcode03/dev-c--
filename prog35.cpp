#include<iostream>
using namespace std;
int main(){
	int columns;
	int i,j;
	int n;

cout<<"Enter The Column Size :\t";
cin>>columns; 
int count=1;
	for(i=1;i<=columns;i++)	
	{		 
		for(j=0;j<columns-i;j++)
	{
		cout<<" ";
	}        	
	cout<<"*";
	
	if(i!=0){
			for(j=0;j<2*i-1;j++)
	{
		cout<<" ";
	}
		cout<<"*";
	}
       
	cout<<endl;
	}
	}