#include<iostream>
using namespace std ;
    int totalMoney(int n) {
      int money=0;
    int week=n/7;
    int day=n%7;
    int last=7;
    int begin=1;
     for(int i=1;i<=week;i++)
     {
        for(int start=i;start<=last;start++)
        {
        money+=start;
        }
        last++;
     begin++;
	 }    
      for(int i=1;i<=day;i++)
       {
        money+=begin;
       begin++;
	   }
	 
      return money;
    } 
	 
    int main()
    {
    	cout<<totalMoney(10);
	}