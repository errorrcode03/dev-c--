#include<iostream>
using namespace std;
int main()
{
	char  str[100];
	bool palindrome=true;
    cin>>str;
	int count=0;
	int size=0;
	while(str[count]!='\0')
	{
	count ++;
	}
	int revSize=count-1;
	while(revSize>size)
	{
		if(str[size]>='A'&&str[size]<='Z')
		{
			str[size]+=32;
		}
	else if(str[revSize]>='A'&&str[revSize]<='Z')
		{
			str[revSize]+=32;
		}
		if(str[size]!=str[revSize])
		{
			palindrome=false ;
			break;
		}
		size++;
		revSize--;
	}
	if(palindrome==true)
	{
		cout<<"Palindrome!\n";
	}
	else 
	{
		cout<<"Not Palindrome!\n";
	}
	cout<<endl;
	return 0;
}