#include<iostream>
using namespace std;
int main()
{	int arr[200];
		int n;
		int second;
		cout<<"Enter the array Size :\t";
		cin>>n;
		cout<<"Enter The array :\n";
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int first=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>first)
		{
			second=first;
		first=arr[i];
		} 
		else if(arr[i]>second && second!=first)
		{
			second =arr[i];
		}
		  }
cout<<"Largest Elment is "<<first;
cout<<"\nSecond Largest is "<<second;
}