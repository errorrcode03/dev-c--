#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;
int main(){
string s="abc";
string x="b";
   if(s.find(x)==string::npos){
   	cout<< false ;
   }
else {
	cout<<true;
}
}