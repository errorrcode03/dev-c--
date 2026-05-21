#include<iostream>
#include<string>
using namespace std ;
int main (){
string str;
cout<<"\nEnter A String :\t";
cin>>str;
cout<<"\nThe Reverse is :\t";
for(int i=str.length();i>=0;i--)
{
	cout<<str[i];
}
}