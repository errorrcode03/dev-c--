#include<iostream>
#include<vector>
using namespace std ;
int fibonacci(int n, vector<int>&dp){
	return dp[dp.size()-1]=dp[dp.size()-2]+dp[dp.size()-3];
}
int main(){
	vector<int>dp(10,0);
	dp[0]=0;
	dp[1]=1;
	 cout<<fibonacci(10,dp);
}