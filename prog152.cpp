#include<iostream>
#include<vector>
using namespace std ;
void quickSort(vector<int>& nums , int start, int end ){
    if(start<end){
	int pivotIndx=findPivot(nums, start, end );
	quickSort(nums, start,pivotindx-1);
	quickSort(nums, pivotIndx+1,end );
}
}