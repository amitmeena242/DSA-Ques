class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string sample = "123456789";
        
        int temp = low, lc=0,hc=0;
        while (temp){
            temp/=10;
            lc++;
        }
        
        temp = high;
        while(temp){
            temp/=10;
            hc++;
        }
        
        for(int i=lc;i<=hc;i++){
            for(int j=0;j<10;j++){
                string a = sample.substr(j,i);
                if(a.length() != i) continue;
                stringstream geek(a);
                geek >> temp;
                if(temp >= low &&  temp <= high)   
                   ans.push_back(temp);
            }
        }
        return ans;
        
    }
};
