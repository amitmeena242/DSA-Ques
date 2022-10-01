/* Given an integer `numRows`, return the first numRows of **Pascal's triangle**.
In **Pascal's triangle**, each number is the sum of the two numbers directly above it as shown:
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> PascalTriangle(int numRows){
    vector<vector<int>>ans;
    for(int i=0; i<numRows;i++){
        vector<int>row(i+1,1);
        for(int j=1;j<i;j++){
            row[j]=ans[i-1][j]+ans[i-1][j-1];
        }
        ans.push_back(row);
    }
    return ans;
}

int main(){
    int n=5;
    vector<vector<int>> ans = PascalTriangle(n);
	for (int i = 0; i < ans.size(); i++){
    	for (int j = 0; j <  ans[i].size(); j++){
    		cout<< ans[i][j]<<" ";
    	}
    	cout<<endl;
    }
}
