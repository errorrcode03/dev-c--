#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter The Number Of The Year :\t";
	cin>>number;
	if(number%4==0)
	{
		cout<<"It is a leap Year\n";
	}
	else 
	{
		cout<<"It is not a leap Year\n";
	}
}