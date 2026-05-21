#include<iostream>
#include<vector>
using  namespace std;
int main()
{
	vector<int>element;
		element.push_back(50);
		element.push_back(45);
		element.push_back(100);
		element.pop_back();
		element.push_back(60);
		   cout<<element.size()<<" ";
		   cout<<element.capacity()<<"\n";
	cout<<"Output:\n";
	for(int val:element)
	{
		cout<<val<<" ";
	}
cout<<element.front()<<"\n"<<element.back()<<"\n"<<element.at(0);
}