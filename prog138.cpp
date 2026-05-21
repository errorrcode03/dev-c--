#include<iostream>
#include<vector>
using namespace std ;
bool binarySearch(vector<int>&arr,int target,int last,int first){
	int mid=first+((last-first)/2);
	if(first>last){return false ;
	}
	if(arr[mid]==target){
		return true;
	}
    if(arr[mid]>target){
	return binarySearch(arr,target,mid-1,first);
}
else if (arr[mid]<target){
		return binarySearch(arr,target,last,mid+1);
}
return false ;
}
int main(){
    vector<int> arr = {1,2,3,4,5,10,15,20,25};
     if(binarySearch(arr,4100,arr.size()-1,0)==true){
     	cout<<"found!\n";
	 }
	 else if(binarySearch(arr,4100,arr.size()-1,0)==false ){
	 	cout<<"Not found!\n";
	 }
}