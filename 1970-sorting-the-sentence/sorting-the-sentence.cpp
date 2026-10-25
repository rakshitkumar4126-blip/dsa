class Solution {
public:
    string sortSentence(string s){
        string ans="";
        string a="";
       map<int,string> m;
       for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            continue;

        }
        if(s[i]<='9' && s[i]>='1'){
            m[s[i]]=a;
            a="";
            continue;
        }
        a.push_back(s[i]);

       }
       for(auto& x:m){
        ans+=x.second+" ";
        
       }
       ans.pop_back();
       return ans;
        
    }
};