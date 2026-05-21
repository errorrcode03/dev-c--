#include<iostream>
using namespace std;
int main()
{
	int n;
	int smallcount=0;
	int largecount=0;
	long long int element[200];
cout<<"Enter The Size Of Array : \t";
cin>>n;
cout<<"Enter The Elements :\t";
for (int i=0;i<n;i++)
{
	cin>>element[i];
}
long long int small=element[0];
for(int j=0;j<n;j++)
{
	if(small>element[j])
	{
		small=element[j];
		smallcount=j;
	}
}
 cout<<"The Smallest Element index is : "<<smallcount<<endl;
long long int  large=element[0];
for(int j=0;j<n;j++)
{
	if(large<element[j])
	{
		large=element[j];
		largecount=j;
	}
}
	cout<<"The Largest Element index is : "<<largecount<<endl;
   

return 0;
}
