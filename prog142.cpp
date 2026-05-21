#include<iostream>
#include<vector>
using namespace std;
void subSets(vector<int>& vec,int start ,vector<int>& temp,vector<vector<int>>&ans){
	ans.push_back(temp);
	for(int i=start;i<vec.size();i++){
		temp.push_back(vec[i]);
		subSets(vec,i+1,temp,ans);
		temp.pop_back();
	}
}
int main(){
	vector<int> nums={1,2,3,4,5,6,7,8,9,10,11,12};
	vector<int>temp;
	vector<vector<int>>ans;
	subSets(nums,0,temp,ans);
	int count=0;
	for(auto& row:ans){
		cout<<"<";
		for(int cols:row){
			cout<<cols<<" ,";
	
		}
		cout<<"/>";
		cout<<endl;
	    count++;
	}
	cout<<"There are total : "<<count<<" Subsets .";
}