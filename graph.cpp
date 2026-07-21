#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<climits>
#include<unordered_map>
using namespace std ;
class graph{
	public :
	unordered_map<int,list<int>>adj;// list<int>* li // vector<vector<int>> adj
		graph(){
			cout<<"This is Graph\n";
			
		}
		void edges(int home ,int neighbour){
			adj[home].push_back(neighbour);
			adj[neighbour].push_back(home);
		}
	 void bfs(int start){
	 	queue<int>q;
	    unordered_map<int,bool>visited;
	    q.push(start);
	    visited[start]=true;
	    while(!q.empty()){
	    	int value=q.front();
	    	cout<<value<<"->";
	    	q.pop();
	    	for(int val:adj[value]){
	    		if(!visited[val]){
	    			visited[val]=true;
	    			q.push(val);
				}
			}
		}
	 }
	 void dfsHelper(int source , unordered_map<int,bool>&visited){
	 	 cout<<source<<" ";
	 	 visited[source]=true;
		 for(int val:adj[source]){
	 		if(!visited[val]){
			   	 dfsHelper(val,visited);
			 }
		 }
	 }
	 void Dfs(){
	 	unordered_map<int,bool>visited;
	 	for(auto& it: adj){
	 		if(!visited[it.first]){
	 			dfsHelper(it.first,visited);
			 }
		 }
	 }
    //detect cycle
    
    bool cycle(int source , unordered_map<int , bool>& visited , int parent){
    	visited[source]=true ;
    	for(auto& val:adj[source]){
    		if(!visited[val]){
    			if(cycle(val,visited,source)){
    				return true ;
				}
			}
				else if(parent!=val){
						return true ;
				}
		}
		return false ;
	}
};
   class detectCycle : public graph{
   	public : 
	bool DetectCycle(){
		unordered_map<int,bool>visited;
		for(auto& val:adj){
			if(!visited[val.first]){
				if(cycle(val.first,visited,-1)){
					return true ;
				}
			}
		}
		return false ;
	}
	bool bfsCycle(int source , unordered_map<int,bool>&visited){
		queue<pair<int,int>>q;
		q.push({source,-1});
	    visited[source]=true;
		while(!q.empty()){
			int num=q.front().first;
			int parent=q.front().second;
			q.pop();
			for(auto& val:adj[num]){
				if(!visited[val]){
					 q.push({val,num});
					 visited[val]=true;
				} 
				else if(parent!=val){
						return true ;
				}
			}
		}
		return false ;
	}
	bool BfsCycle(){
		unordered_map<int,bool>visited;
		for(auto& val:adj){
			if(!visited[val.first]){
			if(bfsCycle(val.first,visited)){
				cout<<"\nCycle Detected";
				return true ;
			}
		}	
	}
		cout<<"\nCycle Not Detected";
		return false ;
	}
};

int main(){
	detectCycle g;
	g.edges(1,20);
	g.edges(1,3);
    g.edges(3,5);
    g.edges(3,4);
   	g.edges(3,2);
 	g.edges(5,16);
 	g.edges(16,4);
   	g.edges(100,200);
   	g.edges(1,100);
   	g.Dfs();
   	g.BfsCycle();
}