#include<iostream>
using  namespace std;
int main()
{
 int 	primeNumber;
 cout<<"Enter The Number To Check It is Prime Or Not : \t";
 cin>>primeNumber ;
 for (int i=2;i<primeNumber;i++)
 {
 	if(primeNumber%i==0)
 	{
 		cout<<"\nThe Number Is Not a Prime Number \n";
 		break;
	 }
	 else {
	 	cout<<"\nThe Number Is A Prime Number \n";
	 	break;
	 }
 }
return 0;
}