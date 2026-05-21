#include<iostream>
using namespace std;
int main ()
{
	int primeNum;
	cout<<"Enter A number :\t";
	cin>>primeNum;
	for(int i=2;i<primeNum;i++)
	{
		if(primeNum%i!=0)
		{
			cout<<"\nThe Number is A Prime Number \t";
			break;
		}
		else {
			cout<<"Non Prime Number \t";
			break;
		}
	}
               if(primeNum==1||primeNum==2){

                  cout<<"\nThe Number is A Prime Number \t";
                         }
                         else if (primeNum<=0)
                         {
                         	cout<<"Syntax Eror!\t";
						 }
}