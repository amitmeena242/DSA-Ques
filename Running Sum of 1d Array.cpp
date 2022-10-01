#include<bits/stdc++.h>
using namespace std;

vector<int>runningSum(vector<int>& nums){
    int n = nums.size();
    for(int i=0;i<n;i++){
        nums[i] = nums[i]+nums[i-1];
    }
    return nums;
}

int main(){
    vector<int>nums={1,2,3,4};
    runningSum(nums);
    for(int x : nums){
        cout<<x<<" ";
    }
    return 0;
}
