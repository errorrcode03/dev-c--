#include<iostream>
#include<vector>
using namespace std;
int buyAndsell(vector<int>stock,int buy)
{
    int index ;
	vector<int>result;
	for(int i=0;i<stock.size();i++)
	{
		if(stock.at(i)==buy)
		{
		index =i;
		break;
		}
	}
	for(int i=index;i<stock.size();i++)
	{
		result.push_back(stock.at(i));
	}
	int sell=0;
	for(int val:result)
	{
		sell=max(sell,val);
	}
	return sell;
}
int main()
{
	vector<int>stock;
	int value;
	cout<<"Enter The Stock Prices One By One (Press 00 To Exit) :\n";
	while(true)
  {
  	cin>>value;
  		if(value==0)
  	{
  		break;
	  }
  	stock.push_back(value);
  
  }
  int buy;
  cout<<"Enter The Stock Price That You Bought :\n";
  cin>>buy;
  if(buyAndsell(stock,buy)==buy)
  {
  	cout<<"No Profit Found!\n";
  }
  else if(buyAndsell(stock,buy)>buy)
  {
  	cout<<"Your Best Price To Exit Stock is :"<<buyAndsell(stock,buy);
  	cout<<"\nProfit Will Be(rs) :\t"<<buyAndsell(stock,buy)-buy;
  }
  return 0;
}