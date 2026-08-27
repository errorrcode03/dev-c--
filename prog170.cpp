#include<iostream>
#include<vector>
using namespace std ;
int call=0;
long long int fibo(long long int n, vector<long long int>& dp){
	  if(n<=1){
	  	return n;
	  }
	  cout<<call<<"\n";
	  call++;
     return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
}
int main(){
	vector<long long int>vec(10000,-1);
	cout<<fibo(10000,vec);
}
Biginteger