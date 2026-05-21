#include<iostream>
using namespace std;
void fibonacci(int num)
{
	int i;
	int last=0;
	int secondLast=1;
	int fibo;
	for(i=0;i<num;i++)
      {
      	if(i<=1)
      	{
      		cout<<i<<" ";
		  }
		  else
		  {
		fibo=last+secondLast;
		cout<<fibo<<" ";
		last=secondLast;
		secondLast=fibo;
		
		 		  }
	  }
}
int main()
{
	int num;
	cout<<"Enter How Many Fibonacci Numbers Will Be Printed : \n";
	cin>>num;
	fibonacci(num);
	cout<<endl;
}