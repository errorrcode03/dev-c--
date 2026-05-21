#include<iostream>
#include<vector>
#include<climits>
using namespace std ;
int fair(vector<int>&nums)
{
     int maxPos=0;
     int maxNeg=INT_MIN;
	for(int val:nums)
	{
		if(val>0)
		{
			maxPos=max(val,maxPos);
		}
		else if (val<0)
		{
				maxNeg=max(val,maxNeg);
		}
	}
	if(maxPos==0||maxNeg==0)
	{
		return 0;
	}
       int sum=maxPos+maxNeg;
	return sum;
}
int main()
{
	vector<int>vec={21,-2,12,-21,13};
	cout<<fair(vec)<<endl;
	return 0;
}