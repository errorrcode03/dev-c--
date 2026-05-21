#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binarySearch(vector<long long int>&vec,long long int target,int first,int last)
{
	if(first>last)
	{
		return -1;
	}
int	mid=first+((last-first)/2);
	if(target==vec[mid])
	{
		return mid;
	}
	else if (target>vec[mid])
	{
		first=mid+1;
		return binarySearch(vec,target,first,last);
	}
	else if(target<vec[mid])
	{
		last=mid-1;
			return binarySearch(vec,target,first,last);
	}
return -1;
}
int main()
{
	vector<long long int>vec={1251341311,52311313131,54131313131,155341341,454131,95313,73131,326,INT_MAX};
	sort(vec.begin(),vec.end());
	int index =binarySearch(vec,52311313131,0,vec.size()-1);
cout<<index;
}