#include<iostream>
#include<vector>
using namespace std ;
vector<int>evenOdd(vector<int>&number)
{
	vector<int>sorted;
	for(int val:number)
	{
		if(val%2==0)
		{
			sorted.push_back(val);
		}
	}
	for(int val:number)
	{
		if(val%2!=0)
		{
			sorted.push_back(val);
		}
	}
return sorted;
}

int main(){
	vector<int>vec={1,2,8,7,9,5};
	for(int val:evenOdd(vec))
	{
		cout<<val;
	}
	return 0;
}