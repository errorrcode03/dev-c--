#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int arr[200];//print sub-arrays
	int size;
	int count=0;
	cout<<"Enter The Size Of Array :\t";
	cin>>size ;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int maxSum=INT_MIN;
	
	for(int j=0;j<size;j++)
	{
		int currSum=0;
		for(int i=j;i<size;i++)
		{
              currSum+=arr[i];
              maxSum=max(currSum,maxSum);
        }		
	}
	cout<<"Max Sum : "<<maxSum;
	return 0;
	}