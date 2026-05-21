#include<iostream>
using namespace std;
void primeNumber()
{
	int num;
	for(int i=1;i<=num;i++)
	{
		if(i%2!=0||i%3!=0)
		{
			cout<<i;
		}
	}
}
int main()
{
	int lastNumber;
	cout<<"Enter How Many Numbers You Want To Show That IS Prime :\n";
	cin>>lastNumber;

		cout<<primeNumber(lastNumber);
}