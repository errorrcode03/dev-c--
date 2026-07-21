#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<map>
using namespace std;

class Graph{
	public :
		unordered_map<int , vector<pair<int,int>>>adj;
		map<int,int>distance;
		void edges(int u, int v, int cost){
			adj[u].push_back({v,cost});
			distance[u]=INT_MAX;
			distance[v]=INT_MAX;
       }
	void dijkstra(int source){
		distance[source]=0;
		priority_queue< pair<int,int>,vector<pair<int,int>>, greater<pair<int,int> > >q;
		q.push({distance[source],source});
		while(!q.empty()){
			int node = q.top().second;
			q.pop();
             for(auto& it : adj[node]){
             	int child= it.first;
             	int weight=it.second;
             	if(distance[child]>distance[node]+weight){
             		distance[child]=distance[node]+weight;
             		q.push({distance[child], child});
				 }
			 }	
		}
		cout<<"Min Cost path Will be : ";
		for(auto it : distance){
			cout<<it.second<<" ";
		}
		
		}
};

int main(){
	Graph node;
node.edges(0, 1, 4);
node.edges(0, 2, 1);
node.edges(2, 1, 2);
node.edges(1, 3, 1);
node.edges(2, 3, 5);

node.dijkstra(0);

}