#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>array;
	vector<int>rev;
	cout<<"Enter How Many Number You Want To add : \t";
	int size;
	cin>>size;
	int myadd;
	cout<<"Enter numbers :\t";
	for(int i=0;i<size;i++)
	{
		cin>>myadd;
		array.push_back(myadd);
	}
	for(int j=size-1;j>=0;j--)
	{
		rev.push_back(array[j]);
					}
					cout<<"The Reverse array is :\t";
					for(int val:rev)
					{
						cout<<val<<" ";
					}
return 0;
}