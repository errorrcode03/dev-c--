#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main()
{
	vector<long long int>vec={1251341311,52311313131,54131313131,155341341,454131,95313,73131,326,INT_MAX};
	sort(vec.begin(),vec.end());
	int low=0;
	int high=vec.size()-1;
	int search;
	bool x=false ;
	cout<<"Enter The Number You Wanted To Search : ";
	cin>>search;
	while(low<=high)
	{
		int mid=low+((high-low)/2);
		if(search==vec[mid])
		{
			cout<<"Found At Index "<<mid;
			x =true;
			return 0;
		}
		else if (search>vec[mid])
		{
			low=mid+1;
		}
		else if (search<vec[mid])
		{
			high=mid-1;
		}
	}
	if(x==false)
	{
		cout<<"Not Found!";
	}
	}