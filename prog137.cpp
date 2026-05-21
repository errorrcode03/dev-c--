#include<iostream>
#include<vector>
using namespace std ;
bool isSorted(vector<int>arr,int n){
	if(n==1){
		return true ;
	}
if(arr[n-1]<arr[n-2]){
	return false ;
}
return isSorted(arr,n-1);
}
int main(){
    vector<int> arr = {1,6,3,4,5};

    if(isSorted(arr, arr.size()))
        cout<<"Sorted";
    else
        cout<<"Not Sorted";
}