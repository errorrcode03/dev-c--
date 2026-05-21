#include<iostream>
#include<vector>
using namespace std ;
void printSubsets(vector<int>arr,vector<int>&ans,int i){
	if(i==arr.size()){
		for(int val:ans){
			cout<<val<<", ";
		}
		cout<<endl;
		return ;
	}
	ans.push_back(arr[i]);
	printSubsets(arr,ans,i+1);
	ans.pop_back();
	printSubsets(arr,ans,i+1);
}
int main(){
	vector<int>vec={1,2,3,4,54,5,6,1,66,4,64,6,96,49,61,6,1,666,1,6,1,6,6,16,1,6,4};
	vector<int>ans;
	printSubsets(vec,ans,0);
}