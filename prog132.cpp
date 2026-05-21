#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>>result;
    int size = nums.size();
    if(nums.size()<=3){ return result;}
    sort(nums.begin(),nums.end());
    for(int i=0;i<size-3;i++){
        if(i>0 &&nums[i]==nums[i-1]){continue;}
        for(int j=i+1;j<size-2;j++){
           if(j>i+1 &&nums[j]==nums[j-1]){continue;}
            int x=j+1;
            int y=size-1;
            while(y>x){
              long long sum=nums[i]+nums[j]+nums[x]+nums[y];
                if(sum>target){
                    y--;
                }
                else if (sum<target){
                    x++;
                }
                else {
                    result.push_back({nums[i],nums[j],nums[x],nums[y]});
                    x++;y--;

                    while(x < y && nums[x]==nums[x+1]){x++;}
                    while(x<y && nums[y]==nums[y-1]){y--;}
                }
            }
        }
        
    }
    
    return result;
    }
};

int main(){
    Solution x;
    vector<int> arr = {-2,-1,-1,1,1,2,2};
    int target = 0;

    vector<vector<int>> result = x.fourSum(arr,target);

    for(const auto &quad : result) {
        cout << "[ ";
        for(int num : quad) {
            cout << num << " ";
        }
        cout << "]\n";
    }
}