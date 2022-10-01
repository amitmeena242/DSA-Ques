#include<bits/stdc++.h>
using namespace std;

vector<int>twoSum(vector<int>&nums, int&target){
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target)
            return {i,j};
        }
    }
    return{-1,-1};

}

int main(){
    vector<int>nums={1,4,5,11,12};
    int target=9;
    for(int &x : twoSum(nums,target))
    cout<<x<<" ";
}
