#include<iostream>
#include<string>
using namespace std ;
string reverse(string &s)
{
	string result="";
	string word[100];
	int length=0;
	string temp="";
 int size =s.length();
 for(int i=0;i<size;i++)
 {
 	if(s[i]==' '||i==size)
 	{
 		if(temp!="")
 	{
 		word[length++]=temp;
 		temp="";
	 }
	 else 
	 {
	 temp+=s[i];
	 }
	 }
 }
 bool lower=true;
    for(int i=length-1;i>=0;i--)
    {
    	string w=word[i];
    	if(lower)
    	{
    		for(char &val:w)
    		{
    			val=tolower(val);
			}
		}
		else 
		{
			for(char &val:w)
			{
				val=toupper(val);
			}
		}
		result+=w;
		lower=!lower;
	}
	return result;
}
int main()
{
	string str;
		getline(cin,str);
	cout<<reverse(str);
	return 0;
}