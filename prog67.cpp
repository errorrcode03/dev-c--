#include<iostream>
#include<vector>
using namespace std ;
int main()
{
	int arr[200];
	int val;
	int ans=0;
	cout<<"Enter The array Size :\t";
	cin>>val;
	for(int i=0;i<val;i++)
	{
	cin>>arr[i];
	}
	for(int j=0;j<val;j++)
	{
		ans^=arr[j];
		if(ans>0)
		{
			cout<<ans;
		}
	}
}