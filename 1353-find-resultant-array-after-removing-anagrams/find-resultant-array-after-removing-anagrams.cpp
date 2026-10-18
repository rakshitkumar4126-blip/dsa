class Solution {
public:
bool issame(string s,string n){
    if(s.length()!=n.length()){
        return false;
    }
    vector<int> arr(26,0);
    vector<int> arr1(26,0);
    for(int i=0;i<s.length();i++){
        arr[s[i]-'a']++;
        arr1[n[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]!=arr1[i]){
            return false;
        }
    }
    return true;
}
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        if(!words.empty()){
            ans.push_back(words[0]);
        }
        for(int i=1;i<words.size();i++){
            if(!(issame(words[i],ans.back()))){
                ans.push_back(words[i]);
               

            }
            
        }
        return ans;
        
    }
};