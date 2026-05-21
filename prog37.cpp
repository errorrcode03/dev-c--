#include<iostream>
using namespace std;
int main()
{
	int oldArr[200];
	int num;
	int arr[200];
	int cnt=0;
	int count=0;
	cout<<"Enter The Number Of Elements :\t";
	cin>>num;
	cout<<"Enter The Elements :\t";
	for(int i=0;i<num;i++)
	{
		cin>>oldArr[i];
	}
	for(int i=1;i<num;i++)
	{
		for(int j=0;j<num;j++)
	{
		if(oldArr[j]==oldArr[i+j])
		{
			count++;
		cout<<"Row No : "<<j<<" and "<< j+i<< " => "<<oldArr[j]<<" And "<<oldArr[j+i]<<" is Dublicte \n";	
      arr[cnt++]=oldArr[j];
				}		
		else 
		{
			continue;
		}
	}
}
if(cnt>0)
{
 for (int k=0;k<cnt;k++)
 {
 	cout<<arr[k]<<" | ";
 }
}
else 
{
	cout<<"No Dublicate Elements Found\t\n";
}
}