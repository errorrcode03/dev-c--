#include<iostream>
using namespace std ;
class Node{
	public:
       Node* next;
	   Node* prev;
	   int data;
	   Node(int val){
	   	data=val;
	   	next=NULL;
	   	prev=NULL;
	   }	
};
class doublyList{
	Node* head;
	Node* tail;
	public:
		doublyList(){
			head=tail=NULL;
		}
		void push_front(int val){
			Node* newNode=new Node(val);
			if(head==NULL){
				head=tail=newNode;
			}
			else {
				newNode->next=head;
				head->prev = newNode;
				head=newNode;
			}
		}
		void push_back(int val){
			Node* newNode=new Node(val);
			if(tail==NULL){
			head=tail=NULL;	
			}
			else {
				newNode->prev=tail;
				tail->next=newNode;
				tail=newNode;
			}
		}
		void pop_back(){
			if(tail==NULL){
				return ;
			}
			if(head==tail){
				delete(head);
				head=tail=NULL;
				return ;
			}
			Node* temp=tail;
		    tail=tail->prev;
			tail->next=NULL;
			delete(temp);
		}
		void pop_front(){
			if(head==NULL){
				return ;
			}
			if(head==tail){
				delete(head);
				head=tail=NULL;
				return ;
			}
			Node* temp=head;
			head=head->next;
			head->prev=NULL;
			delete(temp);
		}
		void get(){
			Node* temp=head;
			while(temp){
				cout<<temp->data<<"  ";
				temp=temp->next;
			}
		}
};
int main(){
	doublyList dll;
	dll.push_front(30);
	dll.push_front(50);
	dll.push_front(600);
	dll.push_front(45);
	dll.push_back(5022);
	dll.pop_back();
	dll.pop_front();
	dll.get();
}