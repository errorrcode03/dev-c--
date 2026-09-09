 #include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
using namespace std ; 
 class UnionFind{
 	public:
 		unordered_map<int,int>parent;
 		unordered_map<int,int>rank;
 	UnionFind(){
 		cout<<"Union Set Join \n";
	 }
	 int find(int x ){
	 	if(parent[x]==x){
	 		return x;
		 }
		 return  parent[x]=find(parent[x]);
	 }
	 void Union(int parA, int parB){
	 	int a=find(parA);
		 int b=find(parB);
		 if(a==b){
		 	return ;
		 }	 
		 if(rank[a]==rank[b]){
		 	parent[b]=a;
		    rank[a]++;
		 }
		 else if(rank[a]>rank[b]) {
		 	parent[b]=a;
		 }
		 else{
		 	parent[a]=b;
		 }
	}
	
	void getinfo(){
		cout<<"Parent Values :\n";
		for(auto& it :parent){
			cout<<it.first<<"->"<<it.second;
			cout<<endl;
		}
		cout<<"Ranks : \n";
		for(auto& ra: rank){
			cout<<ra.first<<" : "<<ra.second;
						cout<<endl;
		}
	}
 };
 int main() {
    UnionFind uf;

    // Initialize
    for (int i = 0; i < 7; i++) {
        uf.parent[i] = i;
        uf.rank[i] = 0;
    }

    uf.Union(0, 1);
    uf.Union(1, 2);
    uf.Union(3, 4);
    uf.Union(5, 6);

    cout << "Parent of 0 : " << uf.find(0) << endl;
    cout << "Parent of 1 : " << uf.find(1) << endl;
    cout << "Parent of 2 : " << uf.find(2) << endl;
    cout << "Parent of 3 : " << uf.find(3) << endl;
    cout << "Parent of 4 : " << uf.find(4) << endl;
    cout << "Parent of 5 : " << uf.find(5) << endl;
    cout << "Parent of 6 : " << uf.find(6) << endl;
    
    cout<<endl;
    uf.getinfo();
} 