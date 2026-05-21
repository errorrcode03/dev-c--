#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int val){
		data=val;
		next=NULL;
	}
	};
	class LL{
		public:
		Node* head;
		Node* tail;
		LL(){
			head=tail=NULL;
		}
		void pushBack(int val){		
			Node* newNode = new Node(val);
			if(head==NULL){			
				head=tail=newNode;
			}
	
			else {	         
			  tail->next=newNode;
			  tail=newNode;
			}
	}
		void pushFront(int val){
			Node* newNode= new Node(val);
			if(head==NULL){
				head=tail=newNode;
				return;
			}
			else {
		newNode ->next=head;
		head=newNode;
			}
		}
		void popFront(){
		if(head==NULL){
			cout<<"The linked list is empty!\n";
		}
		else {
				Node* temp=head;
			head=head->next;
			temp->next=NULL;
			delete temp;
		}
		}
		void popBack(){
	      if(head==NULL){
	      	cout<<"The Linked list is empty\n";
		  }
		  else {
		  			Node* temp=head;
		while(temp->next!=tail){
			temp=temp->next;
		}
		temp->next=NULL;
		delete temp;
		  }
		}
		void getInfo(){
			Node* temp= head;
			while(temp!=NULL){
				cout<<temp->data<<endl;
				temp=temp->next;
			}
		}
		
	};
	int main(){
		LL x;
		x.pushFront(4);
		x.pushFront(10);
		x.getInfo();
	}