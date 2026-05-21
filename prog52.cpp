#include<iostream>
using namespace std;

bool primeNumber(int num)
{
  if(num<=1){
		return false ;
	}
	for(int i=2;i*i<=num;i++)
	{
		if(num % i==0)
		{
		return false;
	        }
	}
	return true;
}
int main()
{
	int prime;
	cout<<"Enter The number (prime numbers between 1 to The Input) :\n";
	cin>>prime;
	cout<<"The Prime numbers Between 1 to "<<prime<<" is : \t";
	for(int i=2;i<=prime;i++)
		{
			if(primeNumber(i))
			{
				cout<<i<<" ";
			}
	}
cout<<endl;
return 0;
}