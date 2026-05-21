#include<iostream>
using namespace std;
int main ()
{
	int arr[200];
	int largest;
	int lowest;
	int n ;
	cout<<"Enter the length of the array : \t";
	cin>>n;
     for(int i=0;i<n;i++)
     {
     	cin>>arr[i];
	 }
	 largest=arr[0];
	 for(int i=1;i<n;i++)
	 {
	 	if(arr[i]>largest)
	 	{
	 	largest=arr[i];
		 }
		 
	 }
lowest=arr[1];
	 for(int i=1;i<n;i++)
	 {
	 	if(lowest>=arr[i])
	 	{
	 	lowest=arr[i];
		 }
		 
		 }
	 
	 
	 cout<<"\n"<<largest<<"\tis Highst Array Of Input\n";
	 cout<<"\n"<<lowest<<"\tis Lowest Array Of Input\n";
	 return 0;
			}