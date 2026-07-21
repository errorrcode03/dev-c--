#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
#include<algorithm>
#include<stack>
using namespace std;
class Graph{
	public :
	unordered_map<int,vector<int>>node;

	Graph(){
		cout<<"Directed Graph\n";
	}
	void edges(int parent , int child){
		node[parent].push_back(child);
	}
};

class CycleDetection : public Graph {
	public :
		CycleDetection(){
			cout<<"Graph Extends CycleDetection\n";
		}
		bool helper(int source,unordered_map<int,bool>& visited, unordered_map<int, bool>& paths){
			visited[source]=true ;
			paths[source]=true ;
			for(int vals:node[source]){
				if(!visited[vals]){
			   if(helper(vals,visited,paths)){
			   	return true ;
			   }
				}
				else if(paths[vals]){
					return true ;
				}
			}
			paths[source]=false ;
			return false ;
		}
		bool deCycle(){
			unordered_map<int, bool>visited;
			unordered_map<int, bool>path;
			for(auto& it : node){
				if(!visited[it.first]){
					if(helper(it.first, visited, path)){
						return true ;
					}
				}
			}
			return false ;
	}
	 
};
class TopologicalSort : public CycleDetection {
	public:
	TopologicalSort(){
		cout<<" Topological\n";
	}
   void topoHelp(int source , unordered_map<int,bool>&visited,stack<int>&st){
   	visited[source]=true;
   	for(int val:node[source]){
   		if(!visited[val]){
   			topoHelp(val,visited,st);
		   }
	   }
	   st.push(source);
   }
	vector<int> TopoloSort(){
		vector<int>ans;
		stack<int>st;
		unordered_map<int,bool>visited;
		for(auto& val:node){
			if(!visited[val.first]){
				topoHelp(val.first,visited,st);
			}
		}
		while(!st.empty()){
			ans.push_back(st.top());
			st.pop();
		}
		return ans ;
	}
};

class kahnAlgo : public TopologicalSort{
     public : 
     kahnAlgo(){
     	cout<<"Sorting using Kahn's Algorithm (BFS)\n";
	 }
	vector<int> kahnSort(){
		unordered_map<int,int>indegree;
		for(auto& it:node){
			indegree[it.first]=0;
		}
		for(auto& it : node){
			for(int nei:it.second){
				indegree[nei]++;
			}
		}
		queue<int>q;
		vector<int>ans ;
		for(auto& it : indegree){
			if(it.second==0){
				q.push(it.first);
			}
		}
		
	while(!q.empty()){
		int front=q.front();
		q.pop();
		ans.push_back(front);
		for(int val:node[front]){
			indegree[val]--;
			
			if(indegree[val]==0){q.push(val);}
		}
	}
	return ans ;
	}
};
int main(){
    kahnAlgo node;
	node.edges(0,1);
	node.edges(0,2);
	node.edges(2,3);
	node.edges(1,4);
	node.edges(4,5);
	node.edges(6,5);
	for(int val: node.kahnSort()){
		cout<<val<<" ";
	}
	
}