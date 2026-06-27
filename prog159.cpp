#include<iostream>
#include<stack>
#include<vector>
using namespace std ;
vector<int>prevSmaller(vector<int>nums){
	stack<int>st;
	vector<int>ans;
	for(int i=0;i<nums.size();i++){
		while(!st.empty() && st.top()>=nums[i]){
			st.pop();
		}
		if(st.size()==0){ans.push_back(-1);
		}
		else {
			ans.push_back(st.top());
		}
		st.push(nums[i]);
	}
	return ans ;
}
int main(){
	vector<int>arr={3,1,0,8,6,68,23,41,6,4,69,4,6,4,94,6,6654,5,5,2,
	2};
	
	for(int val : prevSmaller(arr)){
		cout<<val;
		cout<<endl;
	}
return 0;
}