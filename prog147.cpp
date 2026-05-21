#include<iostream>
using namespace std ;
int main(){
	cout<<"Enter a palindromic number :\n";
	int num;
	cin>>num;
	 int check=num;
	 int palindrome=0;
	 int power=1;
	 while(num>0){
	 	num/=10;
	    power*=10;
	 }
	  power/=10;
	 num=check;
	 while(check>0){
	 	palindrome+=(check%10)*power;
	 	power/=10;
	 	check/=10;
	 }
	
	 if(palindrome==num){
	 	cout<<"Palindrome number";
	 }
	 else {
	 	cout<<"Not a Palindrome";
	 }
}