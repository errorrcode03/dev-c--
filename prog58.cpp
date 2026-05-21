#include<iostream>
using namespace std;
int biToDecimal(int binary)
{
	 int ans=0;
	 
   int remain;
   int pow=1;
	while(binary>0)
	{
		remain=binary%10;
		ans+=(remain*pow);
		binary=binary/10;
		pow*=2;
	}
	return ans;
}
int main()
{
	int masi;
	cout<<"Enter A Binary Number : \t";
	cin>>masi;
	cout<<"The Decimal Number is  : \t"<<biToDecimal(masi);

}