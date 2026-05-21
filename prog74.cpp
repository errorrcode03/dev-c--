#include<iostream>
using namespace std ;
int main()
{
	long long int arr[999];
	int size;
	int sum=0;
	bool found=false;
	cout<<"Enter Size :\t";
	cin>>size;
	cout<<"Enter Numbers :\t";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int reqNum;
	int first=0;
	int last=size-1;
	cout<<"Enter the sum you want to find :\t";
	cin>>reqNum;
	for(int i=0;i<size;i++)
	{
		sum=arr[first]+arr[last];
		if(sum>reqNum)
		{
			last--;
		}
		else if(sum<reqNum)
		{
			first++;
		}
		else if(sum==reqNum &&first!=last && first<last)
		{
			cout<<"Sum found at Index : "<<first<<" and "<<last<<endl;
			cout<<"Sum of : "<<arr[first]<<" and "<<arr[last];
			found=true;
			first++;
			last--;
			cout<<endl;//complexity O(n)
		}
}
if(!found)
{
	cout<<"Cannot Find Sum in This Given Array \n";
}
	}