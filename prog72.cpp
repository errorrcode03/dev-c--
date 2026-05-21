 #include<iostream>
#include<vector>
using namespace std;
int main()
{
	int arr[200];//print sub-arrays
	int size;
	cout<<"Enter The Size Of Array :\t";
	cin>>size ;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int maxSum=INT_MIN;
	int currSum=0;
		int negative=INT_MIN;
	for(int kadan=0;kadan<size;kadan++)//kadan's algo
	{
	      currSum+=arr[kadan];
		 maxSum=max(currSum,maxSum);
	if(currSum<0)
	{
		currSum=0;
	}
	}
		cout<<"Max Sum : "<<maxSum;
	return 0;
	}