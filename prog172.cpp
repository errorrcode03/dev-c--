#include<iostream>
#include<vector>
using namespace std;
void backtracking(vector<int>&values,vector<vector<int>>&subs,vector<int>temp,int st){
	if(values.size()<=st){
		return ;
	}
	if(temp.size()==4){
		subs.push_back(temp);
		return ;
	}
	for(int i=st;i<values.size();i++){
		temp.push_back(values[i]);
		backtracking(values, subs,temp,i+1);
		temp.pop_back();
	}
}

int main(){
	vector<int>values={1,2,3,4,5,6,7,8,9,10};// 1, 1 2 , 1 3 , 1 4 ,5 6,5 7,
	vector<vector<int>>subs;
	vector<int>temp;
	backtracking(values,subs,temp,0);
	for(auto& it:subs){
		for(int val:it){
		cout<<val<<" ";
		}
		cout<<endl;
	}
	return 0;
}