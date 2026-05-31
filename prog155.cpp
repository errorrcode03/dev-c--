//making a linked list
#include<iostream>
using namespace std ;
class Node{
	public :
		int data;
		Node* Next;
		// now create a constructor which is nothing but fucntion in a class with same name as the class
		Node(int val){
			data=val;
			Next=NULL;
		}
};
class List{
		Node* Head;
		Node* Tail;
		public :
			List(){
			   Head=Tail=NULL;
			}
		void push_front(int val){
				Node* newNode=new Node(val);// new is the keyword that stores values dynamically
			if(Head==NULL){
			    Head= Tail= newNode;
			    return ;
			}
			else {
			newNode->Next=Head;
			Head=newNode;
			}
		}
		void push_back(int val){
			Node* newNode= new Node(val);
			if(Head==NULL){
				Head=Tail=newNode;
			}
			else {
				Tail->Next=newNode;
				Tail=newNode;
			}
		}
		void pop_front(){
			if(Head==NULL){
				cout<<"Empty List!!";
				return ;
			}
				Node * Temp = Head;
			    Head=Temp->Next;
			delete(Temp);
			}
		void pop_back(){
			Node * Temp = Head;
			while(Temp->Next!=Tail){
				Temp=Temp->Next;
			}
			Temp->Next=NULL;
			delete(Tail);
			Tail=Temp;
			
		}
		void getValue(){
		Node * temp = Head;
		while(temp!=NULL){
			cout<<temp->data<<" ->";
			temp=temp->Next;
		}
		cout<<"NULL";
		}
		
};
int main(){
	List LL;
	LL.push_front(5);
	LL.push_front(6);
	LL.push_front(7);
	LL.push_back(10);
	LL.push_back(50);
	LL.pop_front();
	LL.pop_back();
	LL.getValue();
}