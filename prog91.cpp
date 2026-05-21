#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minimumHabitats(vector<int> entryHabitat, vector<int> exitHabitat) {
   sort(entryHabitat.begin(),entryHabitat.end());
     sort(exitHabitat.begin(),exitHabitat.end());
     int size=entryHabitat.size();
     int count=0;
     int j=0;
     int i=0;
     int maxVal=0;
    while(j<size&&i<size)
     {
     if(entryHabitat[i]<=exitHabitat[j])
     {
     	count++;
     	maxVal=max(count,maxVal);
     	i++;
	
	 }
	 else
	 {
	 	count--;
	 	j++;
	 }
	 }
	 return maxVal;
}

int main() {
    vector<int> entryHabitat ;
    vector<int> exitHabitat;
    int input1;
    int input2;
    cout<<"Enter Entry Team Time(0 to finish) :\t";
    while(true)
    {
    	cin>>input1;
    	if(input1==0) break;
    	entryHabitat.push_back(input1);
	}
	cout<<"Now, Enter Exit Team Time(0 to finish) :\t";
	 while(true)
    {
    	cin>>input2;
    	if(input2==0) break;
    	exitHabitat.push_back(input2);
	}

    cout << minimumHabitats(entryHabitat, exitHabitat);
    return 0;
}
