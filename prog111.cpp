#include<iostream>
using namespace std;
int main()
{
   char str[100];
   cin.getline(str,100);
   int size=0;
   int sum=0;
   while(str[size]!='\0')
   {
	   if(str[size]>='0'&&str[size]<='9')
	   {
	   	sum+=str[size];
	   	size++;
	   }
   }
   cout<<"Sum Of All Numbers  In The String is :\n"<<sum<<endl;
return 0;
}