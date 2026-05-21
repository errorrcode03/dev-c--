#include<iostream>
#include<bits/c++.h>
using namespace std;
int recursion(vector<int>arr)
{
	char decision;
	int num;
	cout<<"You want Push/Pop ?";
	cin>>decision;
	if(decision=='push')
	{
		cout<<"Give the number you want to push :\t";
		cin>>num;
		arr.push_back(num);
		recursion();
	}
	else if(decision=='pop')
	{
		arr.pop_back();
		recursion();
	}
return arr;
}
int main()
{
	vector<int>arr;
	recursion(arr);
	for(int val:arr)
	{
		cout<<arr;
	}
}