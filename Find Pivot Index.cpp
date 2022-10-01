#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums){
    int n = nums.size();
    int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int left_sum=0,right_sum=sum;
        for(int i=0;i<n;i++){
            right_sum-=nums[i];
            if(left_sum==right_sum){
                return i;
            }
            left_sum+=nums[i];
        }
        return -1;  
 }

int main(){
    vector<int>nums={1,7,3,6,5,6};
    cout<<pivotIndex(nums);
    return 0;
}
