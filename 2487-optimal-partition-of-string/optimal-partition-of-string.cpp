class Solution {
public:
    int partitionString(string s){
        int count=0;
        string substr="";
        for(int i=0;i<s.length();i++){
            
            if(substr.find(s[i])==std::string::npos){
                substr.push_back(s[i]);
            }
            else{
                substr="";
                substr.push_back(s[i]);
                count++;
            }

        } 
        return count+1;
    }
};