#include<iostream>
using namespace std;
 int decTObi(int decimal)
{
	int ans=0;
	int rem;
	int power=1;
    while(decimal>0)
	{
       rem=decimal%2;
       decimal/=2;
       ans+=(rem*power);
       power*=10;
	}
	return ans;
}
int main()
{
cout<<"Enter the Decimal Number : \t";
int binary;
cin>>binary;
cout<<"The Binary Nummber is : \t "<<decTObi(binary);
return 0;
}