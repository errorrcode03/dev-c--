#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std ;
class UnionFind{
	public: 
	unordered_map<int,int>parent;
	unordered_map<int,int>rank;
    int find(int x){
		if(parent[x]==x){
			return x ;
		}
		return parent[x]=find(parent[x]);
	}
	
	void Union(int a, int b){
		int parA=find(a);
		int parB=find(b);
        if(parA==parB){
        return;
		}
		else if ( rank[parB]>rank[parA]){
			parent[parA]=parB;
		}
		else {
			parent[parB]=parA;
		}
		
	}
};
class Kruskals : public UnionFind{
	public:
		vector<tuple<int,int,int>> edges;
		void addEdge(int paren,int child, int cost){
			edges.push_back({cost,paren,child});
			parent[child]=child;
			parent[paren]=paren;
			rank[child]=0;
			rank[paren]=0;
		}
	int minSpanningTree(){
		sort(edges.begin(),edges.end());
		int minCost=0;
			for(auto& it: edges){
				int co,par,cld;
				tie(co,par,cld)=it;
				
				if(find(par)!=find(cld)){
					minCost+=co;
					Union(par,cld);
				}
			}
				cout<<minCost;
				return minCost;
		}
};
int main(){
    Kruskals k;

    k.addEdge(0,1,4);
    k.addEdge(0,2,1);
    k.addEdge(2,1,2);
    k.addEdge(1,3,1);
    k.addEdge(2,3,5);

    k.minSpanningTree();
}