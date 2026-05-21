#include<iostream>
using namespace std;
int main()
{
	char str[200];
	int num;
	int hashcnt=0;
	int count=1;
	int i,j,k;
	char ch[200];
	char hash[200];
	cout<<"Enter The Number of Letters :\t";
	cin>>num;
	cout<<"Enter the "<<num<<" Letters : \n";
	for(i=0;i<num;i++)
	{
		cin>>str[i];
		cout<<i+1<<" Characters Added\n";
	}
	cout<<"\nMovie Hastags (#) to Front\n";
    for(j=0;j<num;j++)
	{
		if(str[j]=='#')
		{
			hash[hashcnt]=str[j];
			hashcnt++;
		}
		else
		{
			ch[j]=str[j];
			count++;
		}
		
	}
	cout<<endl;
		for(k=0;k<(hashcnt);k++)
		{
			cout<<hash[k];
		}
			for(k=0;k<count;k++)
		{
			cout<<ch[k];
		}
		if (hashcnt==0)
		{
			cout<<"\nNo Hastags Found in The String \n";
		}
		else if(count==1)
		{
			cout<<"\nNo Letters Found in The String \n";
		}
			return 0;
}