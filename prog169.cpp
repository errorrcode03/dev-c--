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
void inOrder(Tree* root){
 	if(!root){
 		cout<<"  NULL ";
 		return ;
	 }
	 inOrder(root->left);
	 cout<<root->val<<" ";
    inOrder(root->right);
 }
 void get(Tree* root){
 	if(!root){
 		cout<<"null\n";
 		return ;
	 }
	 get(root->left);
	 cout<<root->val<<" ";
	 get(root->right);
 }
int main(){
    vector<long long> arr={1,5,8,10,15,7} ;
 	Tree* root= bSt(arr);
 	cout<<"\n" ;
	 inOrder(root);
	 get(root);
	 
 }