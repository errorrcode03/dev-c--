#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>array;
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
	int search;
	int count=0;
	bool found=false;
	cout<<"Enter The Number You Want To Search :\t";
	cin>>search;
	for(int val:array)
	{
		if(search==val)
		{
			cout<<"Match Found At Index : "<<count;
			found=true;
		}
		count++;
	}
if(!found)
{
	cout<<"Element Not Found\t"<<endl;
}
return 0;
}