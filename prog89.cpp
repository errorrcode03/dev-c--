#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<long long int>array;
	long long int input;
   long long int answer=1;
	cout<<"Enter Values (0 to exit) :\t";
	while(true)
	{
		cin>>input;
		if(input==0)break;
		array.push_back(input);
	}

	for(long long int val:array)
	{
		answer*=val;
	}
	cout<<"The Product of arrays without self is :\n";
	for(long long int x:array)
	{
		cout<<(answer/x)<<" ";
	}
	cout<<endl;
	return 0;
}