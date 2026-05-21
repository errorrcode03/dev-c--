#include<iostream>
using namespace std;
int main()
{
    char str[100];
	cin.getline(str,100);
	int size =0;//remove spaces from a string
	while(str[size]!='\0')
	{
		size++;
	}
	for(int i=0;i<size;i++){
		if(str[i]!=' ')
		{
			cout<<str[i];
		}
	}
}