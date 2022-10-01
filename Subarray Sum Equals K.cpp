#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt=0;
        unordered_map<int,int>um;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==k) cnt++;
            if(um.find(sum-k)!=um.end())
                cnt+=um[sum-k];
            um[sum]++;
        }
        return cnt;
}

int main() {
    vector <int>nums = {1,2,3};
    int k = 3;
    cout<<"Number of subarrays with sum equal to "<<k<<" = "<<subarraySum(nums,k)<<endl;
    return 0;
}
