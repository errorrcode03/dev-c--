#include<iostream>
#include<string>
using namespace std;
int checkRepeat(string str)
{
	int size=str.length();
    int count=1;
	for(int i=0;i<size-1;i++)
	{
		if(str[i]!=str[i+1])
		{
			count++;
		}
	}
	return count;
}
int main()
{
	cout<<checkRepeat("bbbbcccc");
}