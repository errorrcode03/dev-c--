#include<iostream>
#include<vector>
using namespace std ;
vector<int> product(vector<int>number)
{
	vector<int>result;
	int size=number.size();
 vector<int>right(size,1);
 vector<int>left(size,1);
 for(int i=1;i<size;i++)
{
	left[i]=left[i-1]*number[i-1];
}
 for(int i=size-2;i>=0;i--)
{
	right[i]=right[i+1]*number[i+1];
}
for(int k=0;k<size;k++)
{
	result.push_back(left[k]*right[k]);
}
	return result;
}
int main()
{
	vector<int>vec={1,2,4,5};
	for(int val:product(vec))
	{
		cout<<val<<" ";
	}
}