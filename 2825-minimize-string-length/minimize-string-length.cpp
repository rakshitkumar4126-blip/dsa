class Solution {
public:
    int minimizedStringLength(string s){
    int ans1=0;
    vector<int> ans(26,0);
    for(int i=0;i<s.length();i++){
        ans[s[i]-'a']++;

    }
    for(int i=0;i<26;i++){
        if(ans[i]>0){
            ans1++;
        }
    }

return ans1;
        
    }
};