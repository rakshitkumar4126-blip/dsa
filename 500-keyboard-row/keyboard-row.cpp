class Solution {
public:

vector<string> findWords(vector<string>& words){
        vector<string> ans;
    unordered_set<char> row1={'q','w','e','r','t','y','u','i','o','p'};
    unordered_set<char> row2={'a','s','d','f','g','h','j','k','l'};
    unordered_set<char> row3={'z','x','c','v','b','n','m'};
    for(string word:words){
       bool inrow1=true;
       bool inrow2=true;
       bool inrow3=true;
       for(char ch : word){
        if(row1.find(tolower(ch))==row1.end()) inrow1=false;
        if(row2.find(tolower(ch))==row2.end()) inrow2=false;
        if(row3.find(tolower(ch))==row3.end()) inrow3=false;
       }
       if(inrow1 || inrow2 ||inrow3){
        ans.push_back(word);
       }

    }
    return ans;
        
    }
};