#include<iostream>
#include<vector>
using namespace std ;
int Index(vector<int>& nums , int st, int end){
	int indx = st-1, pivot = nums[end ];
	for(int i=st;i<end ;i++){
		if(nums[i]<=pivot){
			indx++;
			swap(nums[i],nums[indx]);
		}
	} 
	indx++;
	swap(nums[end ], nums[indx]);
	return indx;
}
void quickSort(vector<int>& nums , int start, int end ){
    if(start<end){
	int pivotIndx=Index(nums, start, end );
	quickSort(nums, start,pivotIndx-1);
	quickSort(nums, pivotIndx+1,end );
}
}
int main(){
	vector<int>vec={11,13,18,20,36,33,56,93,14};
	quickSort(vec,0,vec.size()-1);
	for(int val:vec){
		cout<<val<<" ";
	}
}