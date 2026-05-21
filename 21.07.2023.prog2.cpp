#include<iostream>
using namespace std;
int main()
{
	int num,remainder,result,ognum;
	cout<<"Enter the 3 digit number number\t\n";
	cin>>num;
	num=ognum;
	while(ognum!=0)
	{
		remainder=ognum%10;
		result=remainder*remainder*remainder;
			ognum/=10;
			}
			if(result==num)
			{
				cout<<"This is a armstrong number";
			}
		else
		{
			cout<<"This is not a armstrong number";
			}	
return 0;
}