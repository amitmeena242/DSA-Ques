#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        ans[0]=1;
 
        for(int i=1;i<n;i++) ans[i]=ans[i-1]*nums[i-1];     // left prod
 
        int r=1;
        for(int i=n-1;i>=0;i--){                           // right prod
            ans[i]=ans[i]*r;
            r*=nums[i];
        }
         return ans;   
    }

int main() {
   vector<int>nums={1,2,3,4};
    for(int x : productExceptSelf(nums))
    cout<<x<<" ";
}
