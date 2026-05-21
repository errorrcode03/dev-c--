#include<iostream>
using namespace std ;
int main ()
{
	int number ;
	int fact[99];
	cout<<"Enter The Number :\t";
	cin>>number;
		cout<<"The Factors Are :\t";
	for(int i=1;i<=number;i++)
	{
		if(number%i==0||number/i==number)
		{
	        cout<<i<<" ";
	    }
             }		
				
}