#include<iostream>
#include<vector>
using namespace std ;
int countOdd(vector<int>&vec)
{
	int size=vec.size();
	int count=0;
	for(int i=0;i<size;i++)
	{
		for(int j=i;j<size;j++)
		{
			if((vec[i]+vec[j])%2!=0)
			{
				count++;
			}
		}
	}
	return count;
}
int main()
{
	vector<int>vec={1,2,3,4,5};
	cout<<countOdd(vec);
}