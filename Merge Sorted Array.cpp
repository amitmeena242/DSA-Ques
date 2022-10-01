#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr1, int m, vector<int>&arr2, int n){
    int i=m-1;
    int j=n-1;
    int k=(m+n-1);
    
    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            arr1[k--]=arr1[i--];
        }
        else{
            arr1[k--]=arr2[j--];
        }
    }
    
    while(i>=0){
        arr1[k--]=arr1[i--];

    }
    
    while(j>=0){
        arr1[k--]=arr2[j--];
    }
}

int main(){
    vector<int>arr1={1,2,3};
    vector<int>arr2={2,6,7};
    int m=3,n=3;
    arr1.resize(m+n);
    merge(arr1,m,arr2,n);
    for(int &x : arr1) cout<<x<<" ";
    return 0;
}
