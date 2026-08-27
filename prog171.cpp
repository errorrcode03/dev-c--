#include<iostream>
#include<vector>
using namespace std ;
int knapsack(vector<vector<int>>&items,int row, int cap,vector<vector<int>>& dp){
	   if(row==0||cap==0){
	   	return  0;
	   }
	   if(dp[row][cap]!=-1){
	   	return dp[row][cap];
	   }
	  int value=items[row-1][0];
	  int weight=items[row-1][1];
	if(cap>=weight){
		int incl=value+knapsack(items,row-1,cap-weight,dp);
		int exc=knapsack(items,row-1,cap,dp);
		return dp[row][cap]=max(incl,exc);
	}
	return dp[row][cap]=knapsack(items,row-1,cap,dp);
}
int main(){  
	vector<int>value={20,30,50,60,100};
	vector<int>weight={2,3,4,5,9};
	vector<vector<int>>items;
	int cap=10;
	for(int i=0;i<value.size();i++){
		vector<int>temp;
		temp.push_back(value[i]);
		temp.push_back(weight[i]);
		items.push_back(temp);
	}
int	n=value.size();
	vector<vector<int>>dp(n+1,vector<int>(cap+1,-1));
	cout<< "Highest weight : "<<knapsack(items,n,cap,dp);
}