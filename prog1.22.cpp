#include<iostream>
using namespace std;
int main()
{
	int num,onum,result=0,remainder;
	cout<<"enter the 3 digit number\n\t";
	cin>>num;

	while(onum!=0)
	{
		remainder=onum%10;
		result=result+(remainder*remainder*remainder);
		onum=onum/10;
	}
if(num==result)
{
	cout<<"BANTU\n\t";
}
else
{
	cout<<" NOT BANTU\n\t";
}
return 0;
}
