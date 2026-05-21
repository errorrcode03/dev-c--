#include<iostream>
#include<vector>
using namespace std;
vector<int>bubble(vector<int>vec)
{
	int size=vec.size();
	for(int i=0;i<size-1;i++)
	{
		for(int j=1;j<size-i;j++)
		{
			if(vec[j]<vec[j-1])
			{
				int temp=vec[j];
				vec[j]=vec[j-1];
				vec[j-1]=temp;
			}
		}
	}
	return vec;
}
int main()
{
	vector<int>vec={5,8,7,4,1,3};
   for(int val:bubble(vec))
   {
   	cout<<val<<" ";
	} 
}