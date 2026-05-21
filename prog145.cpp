#include<iostream>
#include<vector>
using namespace std ;
void subSets(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,int start){
	 ans.push_back(temp);
	 for(int i=start;i<nums.size();i++){
	 	temp.push_back(nums[i]);
	 	subSets(nums,temp,ans,i+1);
	 	temp.pop_back();
	 }
}
int main(){
	vector<int> nums={1,2,3,4,5,6,7,8,9,10,11,12,152};
	vector<int>temp;
	vector<vector<int>>ans;
	subSets(nums,temp,ans,0);
	int count=0;
	for(auto& row:ans){
		cout<<"...";
		for(int cols:row){
			cout<<cols<<" ,";
	
		}
		cout<<"...";
		cout<<endl;
	    count++;
	}
	cout<<"There are total : "<<count<<" Subsets .";
}