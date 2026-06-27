#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
#include<iomanip>
using namespace std ;
int main(){
	string str;
	getline(cin, str);
	str.erase(str.find('['),1);
	stringstream s(str);
	vector<int>rev;
	string word;
	while(s>>word){
		rev.push_back(stoi(word));
	}  
	for(auto& ch: rev){
		cout<<ch<<" ";
	}
	double num = 5.154165644464;
	cout<<fixed<<setprecision(3)<<num;
}