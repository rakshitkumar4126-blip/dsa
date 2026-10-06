class Solution {
public:
    string smallestSubsequence(string s){
        string ans="";
        
        vector<int> freq(26,0);
        vector<bool> visited(26,false);
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        for(char c:s){
            freq[c-'a']--;
            if(visited[c-'a']) continue;
            while(!ans.empty() && ans.back()>c && freq[ans.back()-'a']>0){
                visited[ans.back()-'a']=false;
                ans.pop_back();
            }
            ans.push_back(c);
            visited[c-'a']=true;
        }
        
   return ans;
        
    }
};