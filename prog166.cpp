#include<iostream>
#include<vector>
using namespace std ;
class Solution {
public:
    bool help(vector<vector<int>>& grid ,int health , int row,int col,vector<vector<bool>>&visited,int &i ){
        if(row>=grid.size() || col >= grid[0].size()|| row<0||col<0){
            return false ;
        }
        if(visited[row][col]){
            return false;
        }
         if(health<=0){
            return false ;
        }
        if(grid[row][col]==1){
            health--;
        }
          if(row==grid.size()-1 && col==grid[0].size()-1 && health>0){
            return true ;
        }
        visited[row][col]=true ;
        i+=1;
        bool ans = help(grid, health,row+1,col,visited,i) || help(grid, health,row,col+1,visited,i)||help(grid, health, row-1,col,visited,i)||help(grid,health,row,col-1,visited,i);
               visited[row][col]=false ;
               ans==0?cout<<"True\t->"<<i:cout<<"False\t->"<<i;
     return ans ;
    }
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size(),false));
        int i=0;
        return help(grid,health,0,0,visited,i);
    }
};
int main(){
	Solution path;
	vector<vector<int>> grid = {
    {1,0,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,0,0,0,0,0,0,1},
    {0,0,1,1,1,1,0,1,1,1,0,1,1,1,0,0,1,0,1,0,0,1,1,1,1,0,1,0,0},

};
	int health=4;
bool ans=	path.findSafeWalk(grid,health);
	cout<< ans ;
}