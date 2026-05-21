#include<iostream>
#include<vector>
using namespace std;
int waterTank(vector<int>hight)
{
   int size=hight.size();
   int largest=0;
   int secondLargest=0;
   int width=0;
   int value=INT_MIN;
   for(int i=0;i<size;i++)
   {
   	if(hight[i]>largest)
   	{
   		largest=hight[i];
          }
   }
   for(int val:hight)
   {
   	if(val>secondLargest &&val<largest)
   	{
   		secondLargest=val;
	   }
   }
   for(int val:hight)
   {
   	if(val==largest)
   	{
   	for(int x:hight)
   	{
   		value=max(value,width*secondLargest);
   			width++;
	   }
	   }
   }
 return value;
}
int main()
{
	vector<int>hight={8,5,6,7};
	cout<<waterTank(hight);
}