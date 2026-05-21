#include<iostream>
#include<vector>
using namespace std;
vector<char>alternativeStr(vector<char>word1,vector<char>word2)
{
	vector<char>neWord;
	int size=word1.size()+word2.size();
	int p=0,q=0;
	for(int i=0;i<size;i++)
	{
		if(i%2!=0)
		{
			neWord.push_back(word1[q++]);
		}
		else if(i%2==0)
		{
			neWord.push_back(word2[p++]);
		}
	}
	return neWord;
	}
	int main()
	{
		vector<char>vec1={'a','b','c'};
		vector<char>vec2={'x','y','z'};
		for(char val:alternativeStr(vec1,vec2))
		{
			cout<<val;
		}
		
	}