#include<iostream>
using namespace std ;
int factorial(int nums){
	if(nums==0){
		return 1;
	}
	return nums*factorial(nums-1);
}
int main(){
	cout<<factorial(9);
}