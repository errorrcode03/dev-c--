#include<iostream>
using namespace std;

int exponentialValue(int number , int power)
{
	int result=1;
	int r=power;
     if(number>0)
     {
     	 while(power>0)
      {
      	if(power%2==1)
      	{
      		result*=number;
		  }
		  number*=number;
	  power/=2;
	  }
	 
    return  result;
	 }
	  if(power==0)
	  {
	  	return 1;
	  }
	  if(number<0)
	  {
	  	number=-number;
     	 while(power>0)
      {
      	if(power%2==1)
      	{
      		result*=number;
		  }
		  number*=number;
	  power/=2;
	  }
	 
    if(r%2==0)
    {
    	return  result;
	}
	else if(r%2==1)
	{
		return -result;
	}
	  }
	  return 1;
}
int main()
{
    int number;
    int power;
    cout << "Enter Decimal Number :\t";
    cin >> number;
    cout << "Enter Power :\t";
    cin>>power;
    cout<<number<<"^"<<power<<" = "<<exponentialValue(number,power);
    return 0;
}
