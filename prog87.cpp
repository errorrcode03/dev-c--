#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int waterTank(vector<int>pillar)//optimal solution
{
	int size=pillar.size();
	int left=0;
	int area=0;
	int right=size-1;
	int height;
 while(left<right)
 {
  height=min(pillar[right],pillar[left]);
  area=max(area,height*(right-left));
  if(pillar[left]>pillar[right])//checking all possible values
  right--;
  else
  left++;
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
