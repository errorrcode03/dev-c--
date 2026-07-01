#include<iostream>
#include<list>
using namespace std ;
class queue{
	public : 
	list<int>ll;
	void push(int val){
		ll.push_back(val);
		return;
	}
	void pop(){
		ll.pop_front();
		return;
	}
	void front(){
		cout<<ll.front();
	}
};
int main(){
	queue q;
	q.push(30);
	q.push(120);
	q.pop();
	q.front();
}