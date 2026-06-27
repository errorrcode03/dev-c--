#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std ;
int main(){
	string str;
	getline(cin, str);
	stringstream s(str);
	vector<string>rev;
	string word;
	while(s>>word){
		rev.push_back(word);
	}  
	reverse(rev.begin(),rev.end());
	for(auto& ch: rev){
		cout<<ch<<" ";
	}
}