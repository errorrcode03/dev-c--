#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std ;
int main()
{
	vector<string>chars={"flower","flood","flute","flip"};
unordered_set<string>vec(chars.begin(),chars.end());
	
	cout<<vec;
}