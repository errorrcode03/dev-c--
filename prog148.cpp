#include<iostream>
#include<vector>
#include<string>
using namespace std ;
void mazeHelper(vector<vector<int>>&box,int row,int col, string temp,vector<string>&ans){
	int size=box.size();
	if(row<0||col<0||row>=size||col>=size||box[row][col]==0|| box[row][col]==-1){
		return ;
	}
   if(row==size-1&&col==size-1){
   	ans.push_back(temp);
   	return ;
   }
   box[row][col]=-1;
	mazeHelper(box,row-1,col,temp+"U",ans);
	mazeHelper(box,row+1,col,temp+"D",ans);
	mazeHelper(box,row,col-1,temp+"L",ans);
	mazeHelper(box,row,col+1,temp+"R",ans);
   box[row][col]=1;
}

vector<string>ratInaMaze(vector<vector<int>>&box){

	vector<string>ans;
	string temp="";
	mazeHelper(box,0,0,temp,ans);
	return ans;
}
int main(){
	vector<vector<int>>box={{1,0,0},{1,1,1},{1,1,1}};
	vector<string>s=ratInaMaze(box);
	for(string val:s){
		cout<<val;
		cout<<endl;
	}
	return 0;
}