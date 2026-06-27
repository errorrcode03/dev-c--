#include<iostream>
using namespace std ;
class Node{
	public:
	int data;
	Node* next;
	Node(int val){
		data=val;
		next=NULL;
	}
};
class circularList{
	Node* tail;
	Node* head;
	public:
		circularList(){
			head=tail=NULL;
		}
		void insertAtHead(int val){
			Node* newNode = new Node(val);
			if(tail==NULL){
				head=tail=newNode;
				tail->next=head;
				return ;
			}
		  newNode->next= head;
		  head=newNode;
		  tail->next=newNode;
		}
		void get(){
			cout<<head->data<<" ";
			Node* temp=head->next;
			while(temp!=head){
				cout<<temp->data;
				temp=temp->next;
			}
		}
};
int main(){
	circularList ll;
	ll.insertAtHead(50);
	ll.get();
}