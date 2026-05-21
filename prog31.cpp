#include<iostream>
using namespace std;
int main()
{
	char str[99];
	int n;
   cout<<"Enter The Size Of The Array :\n";
   cin>>n;
   for(int i=0;i<n;i++)
   {
   	cin>>str[i];
	} 
   for(int i=0;i<n;i++)
   {
   	if(str[i]>='a'&& str[i]<='z')
   	{
   		cout<<str[i]<<"\tis Lowercase Letter \n";
	   }
	   else{
	   	cout<<str[i]<<"\tis Uppercase Letter 5\n";
	   }
   }
}