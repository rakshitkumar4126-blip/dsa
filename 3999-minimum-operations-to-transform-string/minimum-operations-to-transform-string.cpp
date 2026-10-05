class Solution {
public:
    int minOperations(string s){
        
        int ans=0;
        
        for(auto x:s){
            if(x!='a'){
            ans=max(ans,123-x);
            }
        }
  return ans;
        
    }
};