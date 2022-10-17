#include<bits/stdc++.h>
using namespace std;
#define row = 5
#define col = 5
 int x[4]={0,-1,0,1};
 int y[4]={-1,0,1,0};
 void dfs(int i,int j,vector<vector<bool>>&vis,vector<vector<char>>&grid){
        if(i>=grid.size() || i<0 || j>=grid[0].size() || j<0 || grid[i][j]=='0')
        return;
        vis[i][j]=1;
        grid[i][j]='0';
        for(int a=0;a<4;a++)
        dfs(i+x[a],j+y[a],vis,grid);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]!='0'){
                    cnt++;
                    dfs(i,j,vis,grid);
                }
            }
        }
        return cnt;
    }

int main()
{
  int grid[n][] = { { '1', '1', '0', '0', '0' },
                     { '0', '1', '0', '0', '1' },
                     { '1', '0', '0', '1', '1' },
                     { '0', '0', '0', '0', '0' },
                     { '1', '0', '1', '0', '1' } };
 
    cout << "Number of islands is: " << countIslands(M);
 
    return 0;
}
      
