#include<iostream>
#include<vector>
using namespace std ;
int binarySearch(vector<int>arr,int target){
	int size = arr.size();
	for(int i=0;i<size;i++)
	{
		if(target==arr[i])
		{
			return i;
	     	break;
		}
		
	}
return -1;
}
int main(){
vector<int> vec;
int value;
int target;
cout<<"Enter elements (type '-1' to end input) :";
while(true)
{
	cin>>value;
	if(value==-1)
	{
		break;
	}
	vec.push_back(value);
	}	
	cout<<"Enter the targeted elemet :\t";
	cin>>target;
	int index=binarySearch(vec,target);
	if(index!=-1)
	cout<<"Target element found at index : "<<index<<endl;
	else
	cout<<"No Elements Found\n";
}
