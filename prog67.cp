#include<iostream>
#include<vector>
using namespace std ;
int main()
{
	vector<int>arr;
	int val;
	cout<<"Enter The array Size :\t";
	cin>>val;
	for(val:arr)
	{
		arr.push_back(val);
	}
}