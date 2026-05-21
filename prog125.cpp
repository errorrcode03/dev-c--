#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main()
{
	vector<int>vec={2,0,2,1,1,0,1,2,0,0};
 sort(vec.begin(),vec.end());
	for(int val:vec)
	{
		cout<<val<<" ";
	}
}