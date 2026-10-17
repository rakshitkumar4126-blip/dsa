class Solution {
public:
    string decodeMessage(string key, string message){
        string ans="";
        unordered_map<char,char> m;
        char c='a';
        for(int i=0;i<key.length();i++){
            if(m.find(key[i])==m.end() && key[i]!=' '){
               m[key[i]]=c;
               c++;


            }
        }
        for(int i=0;i<message.length();i++){
            if(message[i]!=' '){
           ans+=m[message[i]];
            }
            else{
                ans+=' ';
            }
        }
        return ans;
    }
};