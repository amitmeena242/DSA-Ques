#include<bits/stdc++.h>
using namespace std;
 int lengthOfLongestSubstring(string s) {
    if(s.size()==0)
      return 0;
      if(s.size()==1)
      return 1;
      int cnt=0,ans=0;
        for(int i=0;i<s.size();i++){
              unordered_set<char>st;
              st.insert(s[i]);
            for(int j=i+1;j<s.size();j++){
                if(st.find(s[j])!=st.end())
                    break;
                    st.insert(s[j]);
                    cnt++;
                    ans=max(ans,j-i+1);
        
            }
        }
        return cnt;
 }
int main(){
  string s;
  cin>>s;
  int ans = lengthOfLongestSubstring(s);
  cout<<ans<<endl;
  
}
