#include<iostream>
using namespace std;
int main()
{
	 int arr[200];
	int num;
	int line;
	int index =0;
	cout<<"Enter the Size of arr :\t";
	cin>>num;
	cout<<"Enter the arr :\t";
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number you want to search : \t";
	cin>>line;
for(int j=0;j<num;j++)
{
	if(arr[j]==line)
	{
		index =j;
	}
}

if(index==0)
{
	cout<<"Doest Not Exist \n";
}
else 
{
	cout<<"The array is in ---("<<index<<")--- Position"<<endl;//this is linear search
}
}