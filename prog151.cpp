#include<iostream>
#include<vector>
using namespace std ;
void merge(vector<int>&nums ,int start, int mid , int end ){
	int i=start;
	int j = mid+1;
	vector<int>temp;
	while(i<=mid && j<=end ){
		if(nums[i]<=nums[j]){
			temp.push_back(nums[i]);
			i++;
		}
		else {
			temp.push_back(nums[j]);
			j++;
		}
	}
	while(i<=mid){
		temp.push_back(nums[i]);
		i++;
	}
		while(j<=end){
		temp.push_back(nums[j]);
		j++;
	}
	for(int index=0;index<temp.size();index++){
		nums[index+start]=temp[index];
	}
	
}
void mergeSort(vector<int>&nums, int start , int end ){

	if(start<end){
	    int mid= start+(end-start)/2;
		mergeSort(nums,start,mid);
		mergeSort(nums,mid+1,end);
		merge(nums,start, mid, end );
	}
}
int main(){
	vector<int> vec={12,31,54,1,23,85,36,496,41,3,45,6,4,6,4,9,4,63,46,41,6,4,6,1,3,456,4,6,52,23,12,34,6,3};
	mergeSort(vec,0,vec.size()-1);
	for(int val : vec){
		cout<<val<<" . ";
	}
}