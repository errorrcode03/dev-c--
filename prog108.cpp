#include<iostream>//reversing string without algorithm
using namespace std;
int main()
{
	char str[100];
	cin.getline(str,100);
	int size =0;
	while(str[size]!='\0')
	{
		size ++;
	}
	for(int i=0;i<size ;i++)
	{
		cout<<str[(size-1)-i];
	}
	return 0;
}