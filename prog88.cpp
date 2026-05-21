#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int minimumDistance(vector<int>&element)
{
	int size=element.size();
	int gap=INT_MAX;
  sort(element.begin(),element.end());	
  for(int i=0;i<size-1;i++)
  {
  	gap=min(gap,(element[i+1]-element[i]));
  }
return gap;
}
int main()
{
	vector<int>values;
	int input;
	cout<<"Enter The Numbers (0 to exit):\t";
	while(true)
	{
		cin>>input;
		if(input==0)
		{
			break;
		}
		values.push_back(input);
	}
	
	cout<<"The Minimum Distance Will Be : "<<minimumDistance(values)<<endl;
	}
