#include<iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
	int start =0;
	int end=size-1;
	while(start<end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
int main()
{
	int arr[999];
	int length;
	cout<<"Enter The Length Of The Array :\t";
	cin>>length;
	cout<<"Enter The Array : \n";
	for(int i=0;i<length;i++)
	{
		cin>>arr[i];
	}
	reverseArray(arr,length);
	cout<<"The Reverse Will Be :\t";
	for(int j=0;j<length;j++)
	{
		cout<<" "<<arr[j];
	}
	return 0;
}