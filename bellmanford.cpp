#include<iostream>
#include<vector>
#include<climits>
#include<map>
#include<queue>
#include<unordered_map>
using namespace std ;
class Graph{
	public: 
	vector<tuple<int,int,int>>nodes;
	unordered_map<int,vector< pair<int,int> >>adj;
	map<int,int>dist;
////	void edge(int parent , int child , int weight){
////		nodes.push_back({parent, child , weight});
////		dist[parent]=INT_MAX;
////		dist[child]=INT_MAX;
//	}
	void edges(int par , int child, int cost){
		adj[par].push_back({child,cost});
		adj[child].push_back({par,cost});
	}
};
 
class BellmanFord : public Graph {
	public :
  void	sortestPath(int source){
  	  dist[source]=0;
  	  for(int i=0;i<dist.size()-1;i++){
  	  	  for(auto&  [par,child,cost]: nodes){
  	  	       if( dist[par]!= INT_MAX &&dist[par] +cost <dist[child]){
  	  	       	dist[child]=dist[par]+ cost;
				   }
			  }
		}
		
		for(auto & it: dist){
			cout<<" "<< it.second<< " " ;
		}
  }
};

class Prims : public Graph{
	public:
	void minSpanningTree(int start){
	priority_queue< pair<int,int> , vector<pair<int,int>> , greater < pair<int,int>> > q;
	q.push({0,start});
	unordered_map<int,bool>visited;
	int cost=0;
	while(!q.empty()){
		int weight=q.top().first;
		int vertex=q.top().second;
		q.pop();
		if(!visited[vertex]){
				visited[vertex]=true;
				cost+=weight;
				for(auto& ed:adj[vertex]){
				    int ne=ed.first;
				    int co=ed.second;
				    if(!visited[ne]){
				    	q.push({co,ne});
					}
				}
               }
	}
	cout<<cost;
	}
};
int main(){
	Prims n;
n.edges(0, 1, 5);
n.edges(0, 2, 2);
n.edges(1, 3, 4);
n.edges(2, 3, 1);
n.edges(2, 4, 7);
n.edges(3, 5, 3);
n.edges(4, 5, 2);
n.edges(5, 6, 6);
n.edges(5, 7, 4);
n.edges(6, 8, 1);
n.edges(7, 8, 2);
n.edges(8, 9, 5);

n.minSpanningTree(0);
}