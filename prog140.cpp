#include<iostream>
#include<map>
#include<vector>
#include<set>
using namespace std ;
int validPair(vector<int>&arr){
	int size=arr.size();
	map<int,int>freq;
	for(int val:arr){
		freq[val]++;
	}
	int count=0;
	  for(auto it1=freq.begin();it1!=freq.end();it1++){
	  	for(auto it2=it1;it2!=freq.end();it2++){
	  		int x=it1->first;
	  		int y=it2->first;
	  		if(freq[x]>=y && freq[y]>=x){
	  			count++;
			  }
		  }
	  }
	return count;
}
int main(){
	vector<int>vec={1,2,3,4,5};
	int count=validPair(vec);
	cout<<count;
}