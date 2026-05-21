#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int waterTank(vector<int>pillar)//brute force approach
{
	int size=pillar.size();
	int area=INT_MIN;
	int left=0;
	int right=0;
	int height;
for(int i=0;i<size;i++)
{
	for(int j=i+1;j<size;j++)
	{
		left=pillar[i];
		right=pillar[j];
		height=min(left,right);
		area=max(area,height*(j-i));
	}
}
return area;
}
int main()
{
	vector<int>height;
	int input;
	cout<<"Enter The Piller's Height ( Type '0' to exit) :\n";
	while(true)
	{
	cin>>input;	
	if(input==0)
	{
		break;
	}
	height.push_back(input);
	}
	cout<<"The Highest Unit Water Can Store Upto :\t"<<waterTank(height);
	return 0;
}