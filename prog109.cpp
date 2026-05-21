#include<iostream>
using namespace std;
int main()
{
	char str[100];
cin.getline(str,100);
	int size =0;
	int vowel=0;
	int consonent=0;
	while(str[size]!='\0')
	{
		size++;
	}
	for(int i=0;i<size ;i++)
	{
		if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
		{
			vowel++;
		}
	else if(str[i]==' '){
		continue;
	}
		else 
		{
			consonent++;
		}
	}
	cout<<"The Number Of vowels : "<<vowel<<endl;
	cout<<"The Number of consonents : "<<consonent<<endl;
	return 0;
}