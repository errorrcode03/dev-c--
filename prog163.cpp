#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include <algorithm>
using namespace std ;
int main(){
	int row,col;
	cout<<"Enter row & column : ";
	cin>>row;
	cin>>col;
	cin.ignore();
	cout<<"Enter Numbers : ";
	string str;
	getline(cin,str);
stringstream s(str);
string word;
vector<int> values;
while(getline(s,word,',')){
	values.push_back(stoi(word));
   }
   vector<vector<int>>mat(row,vector<int>(col));
   int k=0;
   for(int i=0;i<row;i++){
   	for(int j=0;j<col;j++){
   		mat[i][j]=values[k++];
	   }
   }
   for(auto & it: mat){
   	for(int val: it){
   		cout<<val<<" ";
	   }
	   cout<<endl;
   }
}