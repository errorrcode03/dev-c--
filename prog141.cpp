#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std ;

vector<int>toBinary(int nums)
{
	vector<int>binary;
	while(nums>0){
		binary.push_back(nums%2);
		nums/=2;
	}
	reverse(binary.begin(),binary.end());
	return binary;
}
 int toDecimal(vector<int>binary){
	 int nums=0;
	int p=1;
	for(int i=binary.size()-1;i>=0;i--){
		nums=nums+(binary[i]*p);
		p*=2;
	}
	return nums;
}
int main(){
	int a,b;
	vector<int>arr;
	cout<<"Enter A :\n";
	cin>>a;
	cout<<"Enter B :\n";
	cin>>b;
	vector<int>vec=toBinary(b);
	sort(vec.begin(),vec.end());
	int maxOut=INT_MIN;
	do{
		int permutate=toDecimal(vec);
		maxOut=max(maxOut,(a^permutate));
	}
	while(next_permutation(vec.begin(),vec.end()));
	cout<<"max value = "<<maxOut<<endl;
}