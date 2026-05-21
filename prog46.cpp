#include<iostream>
using namespace std;
int main()
{    char arr[200];
    int count=0;
    char palindrome[200];
    int size;
    cout<<"Enter The size of the number : \t";
	cin>>size;
	int cnt=0;
    for(int i=0;i<size;i++)
    {
    	cin>>palindrome[i];
	}
	for(int j=size-1;j>=0;j--)
	{
      arr[cnt++]=palindrome[j];
	}
for(int j=0;j<size;j++)	
if(arr[j]==palindrome[j])
{
 count++;
}
else {
	
count--;
}
if(count==size)
{
	cout<<"Palindrome\n";
}
else {
	cout<<"Not Palindrome\n";
}
return 0;
}