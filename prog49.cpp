#include<iostream>
  using namespace std ;
  int ncr(int num) 
  {

  	int factorial=1;
  	for(int i=1;i<=num;i++)
  	{
  		factorial=i*factorial;
	  }
	  return factorial;
  }
  int main()
  {
  	int N;
  	int R;
  	cout<<"Enter The Value of N :\t";
  	cin>>N;
  	cout<<"Enter The value of R :\t";
  	cin>>R;
  	int Up=ncr(R); 
	 int Down=ncr(N-R);
	 int DownDown=ncr(N);
	 int value=Up/Down/DownDown;
  	cout<<"The Value of "<<N<<"C"<<R<<" = "<<value<<endl;
  }