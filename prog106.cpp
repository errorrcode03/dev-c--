#include<iostream>
using namespace std;
int main()
{
	bool checkPal=true;
	char str[100];
	cin.getline(str,100);
	int size=0;
	while(str[size]!='\0')
	{
		size++;
	}
	int i=0,j=size-1;
		while(j>i)
		{
			if(str[i]!=str[j])
			{
				checkPal=false;
				break;
                    }
			i++;
			j--;
		}
    if(checkPal==true)
   {
	cout<<"yes"<<endl;
   }
   else {
	cout<<"no"<<endl;
                }
                return 0;
}