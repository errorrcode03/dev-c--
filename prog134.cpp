#include<iostream>
using namespace std ;
void printNumbers(int nums){
	cout<<nums<<" ";
if(nums>1){	printNumbers(nums-1);
}
}
int main(){
	printNumbers(10);
}