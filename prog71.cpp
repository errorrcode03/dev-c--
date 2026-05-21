#include<iostream>
using namespace std ;
int main ()
{
	int arr[]={1,2,3,4,5};
	int size =5;
	for(int j=0;j<size;j++)
	{
		for(int i=j;i<size;i++)
		{
			for(int k=j;k<=i;k++)
			{
			cout<<arr[k];
              }
              cout<<" ";         
                      }
                   cout<<endl;
                   }
	  }