//book allocation problem
#include<iostream>
#include<vector>
using namespace std ;
vector<int>isValid(vector<int>&books)
{
     int sum=0;
     vector<int>vec;
     for(int val:books)
     {
     	sum+=val;
     	vec.push_back(sum);
	 }
	 return vec;
}
int bookAllocation(vector<int>&books , int student)
{
	if(books.size()<student)
	{
		return -1;
	}
	int st=0;
	int end=0;
	for(int val:books)
	{
		end+=val;
	}
	int avg=end/student;
	int ans=0;
	vector<int>vec=isValid(books);
	while(end>=st)
	{
		int mid=st+((end-st)/2);
		if(vec.find(arr[mid])==int::npos)
		{
			if(arr[mid]>avg)
			{
				end=mid-1;
			}
			else
			{
				st=mid+1;
			}
		}
		else 
		{
			ans=max(ans,arr[mid]);
		}

	}
	return ans;
}
int main()
{
	vector<int>vec={2,1,3,4};
	cout<<bookAllocation(vec,2);
}