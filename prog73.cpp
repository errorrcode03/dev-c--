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
	cout<<"Enter the sum you want to find :\t";
	cin>>reqNum;
	for(int i=0;i<size;i++)
	{
	for(int j=i+1;j<size;j++)
	{
		sum=arr[i]+arr[j];
		if(sum==reqNum)
		{
			cout<<"Found At Index : "<<i<<" And "<<j<<endl;
			cout<<"Numbes are : "<<arr[i]<<" and "<<arr[j]<<endl;
			found=true;
			break;
		}
	}
    
	}
	if(!found)
	{
		cout<<"Cannot Find The Sum In given Arrays \n";
	}
	return 0;
}