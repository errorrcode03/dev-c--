#include<iostream>
#include<vector>
#include<climits>
using namespace std ;
int fair(vector<int>&nums)
{
	vector<int>positive,negative;
	for(int val:nums)
	{
		if(val>0)
		{
			positive.push_back(val);
		}
		else if (val<0)
		{
				negative.push_back(val);
		}
	}
	if(positive.empty()||negative.empty())
	{
		return 0;
	}
	int sum=INT_MIN;
	int pSize=positive.size();
	int nSize=negative.size();
	for(int i=0;i<pSize;i++)
	{
		for(int j=0;j<nSize;j++)
		{
			sum=max(sum,(positive[i]+negative[j]));
		}
	}
	return sum;
}
int main()
{
	vector<int>vec={21,-2,12,-21,13};
	cout<<fair(vec)<<endl;
	return 0;
}