#include<iostream>
using namespace std ;
int fibonacci(int nThNum){
	if(nThNum==0){
		return 0;
	}
	if(nThNum==1){
		return 1;
	}
return fibonacci(nThNum-1)+fibonacci(nThNum-2);
}
int main(){
	cout<< fibonacci(9);
}