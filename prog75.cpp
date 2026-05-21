#include<iostream>
#include<vector>
using namespace std;
int majority(vector<int>array)
{
	int size=array.size();
     for(int val:array)
         {
        int frq=0;
        for(int el:array)
          {
       if(el==val)
       {
       	frq++;
	   }
	     }   
		 if(frq>size/2)
		 {
		 	return val;
			  } 	
	}
 return -1;
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