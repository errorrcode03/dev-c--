#include<iostream>
#include<vector>
#include<algorithm>//for sorting the arrays 
using namespace std;
int majority(vector<int>array)
{
	int ans=0;
	int frq=0;
	int size=array.size();
	for(int i=0;i<size;i++)
	{
       if(frq==0)
	   {
	   	ans=array[i];
	   	if(ans==array[i])
	   	{
	   		frq++;
		   }
		   else
		   {
		   	frq--;
		   }
		   }	
	}
	return ans;
}
 
int main()
{
	vector<int>vec;
	int size;
	int ele;
	cout<<"Enter Size :\t";
	cin>>size;
	cout<<"Enter Arrays :\n";
	for(int i=0;i<size;i++)
	{
		cin>>ele;
	vec.push_back(ele);
	}
	if(majority(vec)==-1)
	{
		cout<<"No Majority elements \t";
	}
	else
	{
		cout<<"Majority Element is : "<<majority(vec);
	}
}