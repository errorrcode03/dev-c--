#include<iostream>
using namespace std;
int sumofDigits(int num)
{
	 int remainder =0;
	 int sum;
    while(num!=0)
    {
    	remainder=num%10;
    	num=num/10;
    	sum+=remainder;
	}
	return sum;
}
int main()
{
	cout<<sumofDigits(325);
}