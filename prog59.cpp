#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	string hash;
	string cha;
		cout<<"Enter The Character Filled With Hash : \t";
		cin>>str;
		cout<<str.length()<<"  Elements Added \t";
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='#')
		{
		hash.push_back(str[i]);	
		}
		else 
		{
             cha.push_back(str[i]);	
		
		}
	}
	cout<<"\nThe Fronted Hash Will Be :  ";
            cout<<hash<<cha;
	return 0;
}
