class Solution {
public:
    string greatestLetter(string s){
        int n=s.length();
        vector<bool> haslower(26,false); 
        vector<bool> hasupper(26,false); 
         for(int i=0;i<n;i++){
            if(s[i]<='z' && s[i]>='a'){
                haslower[s[i]-'a']=true;
            }
            else{
                hasupper[s[i]-'A']=true;
            }
         }
         for(int i=25;i>=0;i--){
            if(haslower[i] && hasupper[i]){
                return string(1,'A'+i);
            }
         }
         return "";
    }
};