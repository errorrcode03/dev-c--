#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"Enter The Character :\n";
	cin>>str;
	int count=1;
	for(int i=0;i<str.length();i++)
	{
	 if(str[i]==str[i+1])
	 {
	 	count++;
	 }
	 else
	 {
	 	cout<<count<<str[i];
	 	count=1;
	 }
              }
}