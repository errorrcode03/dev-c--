#include<iostream>
#include<vector>
using namespace std;
int countNums(vector<int>&student)
{
	int size=student.size();
	int count=0;
	if(size<0) return 0;
	for(int i=1;i<size;i++)
	{
		if(student[i]<student[i-1])
		{
			count++;
		}
	
	}
	return count;
	}
int main(){
	vector<int>vec={};
	cout<<countNums(vec);
}
