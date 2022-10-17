#include<bits/stdc++.h>
using nameppace std;


int trap(vector<int>& arr){
  ll i=0,j=arr.size()-1;
        ll left=0,right=0;
        while(i<=j){
            if(arr[i]<arr[j]){
                if(arr[i]>left){
                    left=arr[i];
                }
                else{
                    sum+=left-arr[i];
                }
                i++;
            }
            else{
                if(arr[j]>right){
                    right=arr[j];
                }
                else{
                    sum+=right-arr[j];
                }
                j--;
            }
        }
        return sum;
}

int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  cout<<trap(v)<<"\n";
}
