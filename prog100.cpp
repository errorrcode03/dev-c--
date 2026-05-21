#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int greatestNum(long long int num)
{
	vector<int>vec;
	int answer=INT_MIN;
	while(num!=0)
	{
		vec.push_back(num%10);
		num/=10;
	}
	long long size=vec.size();
	for(int i=0;i<size;i++){
      answer=max(answer,vec[i]);
	}
	return answer;
}
int main()
{
	cout<<greatestNum(124496147794618);
}