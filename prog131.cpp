#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<vector<long long>>arr={{1,2,3},{4,5,6},{7,8,9}};
	int rows=arr.size();
	int cols=arr[0].size();
    long long sum =0;
	for(int i=0;i<rows;i++){
         sum+=arr[i][i];
	}
    cout<<"Diagonal Sum : "<<sum;
}