#include<iostream>
#include<string>
using namespace std ;
class Person{
	private:
   virtual void info()=0;
};
class Student :public Person{
	public:
	string address;
     string college;
     void info(){
     	cout<<"Address : "<<address<<"\n"<<"College :"<<college<<"\n";
	 }
	 ~Student(){
	 	cout<<"Example of Abstraction\n";
	 }
};
int main(){
     Student s;
     s.college="JIS College OF Engineering";
     s.address="Krishnanagar";
  s.info();
}