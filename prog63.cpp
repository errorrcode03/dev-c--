#include<iostream>
using namespace std ;
int linearSearch(int arr[],int size , int find)
{
	for(int i=0;i<size;i++)
	{
		if(find==arr[i])
		{
			return i;//element found
		}
	}
	return false;//element not found
}
int main()
{
    int target;
	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	cout<<"Enter The Target Element :\t";
	cin>>target;
    cout<<"("<<linearSearch(arr,sizeof(arr),target)<<")"<<" is the index of the element\t";
    return 0;
}