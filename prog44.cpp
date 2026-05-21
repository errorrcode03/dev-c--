#include<iostream>
using namespace std;
int main()
{
	int element[200];
	int i,j;
	int num;
	cout<<"Enter The Number of Elements :\n";
    cin>>num;
    cout<<"Enter The Elements : \n";
    for(i=0;i<num;i++)
     {
	cin>>element[i];
	cout<<endl;
      }
      int firstElement;
      firstElement=element[0];
      for( j=1;j<num;j++)
      {
      	if(element[j]>firstElement && firstElement)
      	{
      	firstElement=element[j];
		  }
	  }
	  cout<<"Largest Element is :\t"<<firstElement;
}
//second largest