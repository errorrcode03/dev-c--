#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int fairSum(vector<int>&nums)
{
	vector<int>positive;
	vector<int>negative;
	for(int val:nums)
	{
		if(val>0)
		{
			positive.push_back(val);
		}
		else if(val<=0)
		{
				negative.push_back(val);
		}
	}
	int size=negative.size();
		int size2=negative.size();
		sort(positive.begin(),positive.end());
		sort(negative.begin(),negative.end());
		
	return positive[size-1]+negative[0];
}
int main()
{
	vector<int>vec={21,-2,12,-21,13};
	cout<<fairSum(vec);
	return 0;
}