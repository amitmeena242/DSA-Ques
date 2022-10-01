/*Given array `nums` of size `n`, return *the majority element*.
The majority element is the element that appears more than `⌊n / 2⌋` times. You may assume that the majority element always exists in the array.*/



#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums){
    int n=nums.size();
    int cnt=0;
    int majorityCandidate=0;
    for(int i=0;i<n;i++){
        if(cnt==0) majorityCandidate=nums[i];
        if(nums[i]==majorityCandidate) cnt++;
        else cnt--;
    }
    return majorityCandidate;
}

int main(){
    vector<int>nums={2,2,1,1,1,2,2};
    cout<<majorityElement(nums);
    return 0;
}
