class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts){
        string ans="";
        long long sum=0;
        for(int i=0;i<shifts.size();i++){
            sum+=(shifts[i]%26);
        }
        for(int i=0;i<s.length();i++){
            ans.push_back('a'+(s[i]-'a'+sum)%26);
            sum-=(shifts[i]%26);
        }
        return ans;

        
    }
};