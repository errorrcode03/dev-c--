#include<iostream>
#include<vector>
#include<string>
#include<vector>

using namespace std ;
class Tree{
	public :
	int val;
	Tree* left;
	Tree* right;
	Tree(int data){
		val=data;
		left=right=nullptr;
	}
};
// Find Successor
Tree* getSuccssor(Tree* root){
	while(!root && !root->left){
		root=root->left;
	}
	return root ;
}
// Insertion of Nodes
 Tree* insert(Tree* root, long long val){
 	if(!root){
 		return new Tree(val);
	 }
	 if(root->val>val){
	 	root->left=insert(root->left,val);
	 }
	 else{
	 	root->right=insert(root->right,val);
	 }
	 return root;
 }
 // Making of binary tree
 Tree* bSt(vector<long long>&nums){
 Tree* root=nullptr;
 for(int val:nums){
 	root=insert(root,val);
 }
 return root;
}
//In order Travalsal
void inOrder(Tree* root){
 	if(!root){
 		cout<<"  NULL ";
 		return ;
	 }
	 inOrder(root->left);
	 cout<<root->val<<" ";
    inOrder(root->right);
 }
 // Binary search on BST
 bool binarySearch(Tree* root,long long target){
 	 if(!root){
 	 	return false ;
	  }
	  if(root->val==target){
	  	return true;
	  }
	  if(root->val>target){
	 return binarySearch(root->left,target);
	  }
	  return binarySearch(root->right,target);
 }
 // Delete Node
 Tree* deleteNode(Tree*root, int target){
 	if(!root){
 		return nullptr;
	 }

	 if(root->val>target){
	 	root->left=deleteNode(root->left,target);
	 }
	 else if(root->val<target){
	 	root->right=deleteNode(root->right,target);
	 }
	else if(root->val==target){
	 	if(!root->left){
	 		Tree* curr=root->right;
	 		delete(root);
	 		return curr;
		 }
		 else if (!root->right){
		 	Tree* curr=root->left;
		 	delete(root);
		 	return root;
		 }
		 else {
		 	Tree* temp= getSuccssor(root->right);
		 	root->val=temp->val;
		 root->right =deleteNode(root->right,root->val);
		 }
	 }
	 return root;
 } 
 Tree* longestBst(Tree* root){
 	
 }
 int main(){
    vector<long long> arr={1,5,8,10,15,7} ;
 	Tree* root= bSt(arr);
 	cout<<"\n" ;
	 inOrder(root);
 }