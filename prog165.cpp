#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std ;
class Node{
	public : 
   int data;
   Node* left;
   Node* right;	
   Node(int val){
   	data=val;
   	left=right=nullptr;
   }
};
   static int indx=-1;
Node* biTree(vector<int>&preOrder){
	     indx++;
	  if(preOrder[indx]==-1){
	  	return nullptr;
	  }
	  Node* root = new Node(preOrder[indx]);
	      root->left=biTree(preOrder);
	      root->right=biTree(preOrder);
	  return root;
}
void preOrd(Node* root){
	if(!root){
		cout<<"NULL"<<endl;
		return;
	}
	cout<<"->"<<root->data<<" \n";
	preOrd(root->left);
	preOrd(root->right);
}
void inOrder(Node* root){
	if(!root){
		cout<<"___"<<endl ;
		return ;
	}
	inOrder(root->left);
	cout<<root->data<<"\t\n";
	inOrder(root->right);
}
void postOrder( Node * root){
	if(!root){
		cout<<"___";
		return ;
	}
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ->";
}
void levelOrder(Node* root){
	cout<<"THIS IS LEVEL ORDER TRAVARSAL ALSO KNOWN AS BFS \n\n\n";
	queue<Node*>q;
     q.push(root);
     while(!q.empty()){
     	Node* curr= q.front();
     	q.pop();
     	cout<<curr->data<<" ->";
     	if(curr->left){
     		q.push(curr->left);
		 }
		 else {
		 	cout<<"\nNULL";
		 }
		 if(curr->right){
		 	q.push(curr->right);
		 }
		 else{
		 	cout<<"\nNULL";
		 }
	 }
}
void getHeight(Node* root,int& maxx,int depth){
      if(!root){
      	return ;
	  }
	  maxx=max(depth, maxx);
  getHeight(root->left,maxx,depth+1);
  getHeight(root->right,maxx,depth+1);
}
int countNodes(Node* root, int count){
	if(!root){
		return count;
	}
	return countNodes(root->left,count)+countNodes(root->right,count)+1;
}
int sum(Node* root){
	if(!root){
		return 0;
	}
	return root->data+sum(root->left)+sum(root->right);
}
void kthLevel(Node* root, int level){
	queue<Node*>q;
	q.push(root);
	while(!q.empty()){
		int size =q.size();
		if(level==1){
		while(!q.empty()){
		cout<<q.front()->data<<" ";
		q.pop();
		}
		return ;
	}
		for(int i=0;i<size;i++){
			Node* curr= q.front();
			q.pop();
		  if(curr->left){
		  	q.push(curr->left);
		  }	
		  if(curr->right){
		  	q.push(curr->right);
		  }
		}
	level--;
	}
}
void topView(Node* root, int depth){
  queue<pair<Node*,int>>q;
  q.emplace(root,0);
  map<int,int>mp;
  while(!q.empty()){
  	Node* curr= q.front().first;
  	int currHd= q.front().second;
  	q.pop();
  	if(mp.find(currHd)==mp.end()){
  		mp[currHd]=curr->data;
	  }
  	if(curr->left){
  		q.emplace(curr->left,currHd-1);
	  }
	  if(curr->right){
	  	q.emplace(curr->right,currHd+1);
	  }
  }
  for(auto& it: mp){
  	cout<<it.second<<" ";
  }
}
int sumTree(Node* root){
	if(!root){
		return 0;
	}
return 	root->data=root->data+sumTree(root->left) + sumTree(root->right);
}
 bool lTrack(Node* root){
        if(!root){
            return true ;
        }
      
        if (root->right && !root->left) {
        return false ;
       }
       return lTrack(root->left) && lTrack(root->right);
    }
int main(){
	vector<int>arr={1,2,-1,-1,4,5,-1,-1,6,-1,-1,7,8,9,-1,-1,10,-1,-1,11,12,-1,-1,13,-1,-1};
	Node* root =biTree(arr);
	int mhi=0;
    getHeight(root,mhi,1);
    cout<<"Height : "<<mhi<<"\n";
    int count=countNodes(root,0);
    cout<<"Nodes :"<<count;
    cout<<endl ;
    int summ= sum(root);
    cout<<"Sum of Nodes : "<<summ;
    cout<<"\n kth level ";
	 kthLevel( root, 3);
	 cout<<endl;
	 cout<<"Top view : ";
	 topView(root,0);
	 cout<<endl ;
	 sumTree(root);
	 cout<<"track : "<<lTrack( root);
    return 0;
}
