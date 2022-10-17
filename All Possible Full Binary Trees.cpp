#include<bits/stdc++.h>
using namespace std;

vector<TreeNode*> solve(int n){
       vector<TreeNode*>ans;
    if(n==1)
    {
        TreeNode* curr = new TreeNode(0);
        ans.push_back(curr);
        return ans;
    }
 
    for(int i=1;i<n;i+=2){
        vector<TreeNode *> l = solve(i);
        vector<TreeNode *> r = solve(n-i-1);
        for(TreeNode * lr:l){
            for(TreeNode *rr:r){
                TreeNode *root=new TreeNode(0);
                root->left=lr;
                root->right=rr;
                ans.push_back(root);
            }
        }
    }
    return ans;
}
   int main() {
     int n;
     cin>>n;
        cout<<solve(n)<<"\n";
   }
