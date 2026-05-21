#include<iostream>
#include<vector>
using namespace std;
vector<int>lastZero(vector<int>&vec)
{
	vector<int>result;
	int size=vec.size();
	for(int i=0;i<size;i++)
	{
		if(vec[i]!=0)
		{
			result.push_back(vec[i]);
		}
	}
		for(int i=0;i<size;i++)
	{
		if(vec[i]==0)
		{
			result.push_back(vec[i]);
		}
	}
	return result;
}
int main()
{
	vector<int>x={1,2,0,3,0,8,0,9,0,10,12};
	for(int val:lastZero(x))
	{
		cout<<val<<" ";
	}
	cout<<endl;
	return 0;
}