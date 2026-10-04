class Solution {
public:
    int numberOfSpecialChars(string word){
        unordered_map<char,int> firstupper;
        unordered_map<char,int> lastlower;
        int ans=0;
        int n=word.length();
        for(int i=0;i<n;i++){
            if(word[i]<='z' && word[i]>='a'){
                lastlower[word[i]]=i;
            }
            else{
                if(firstupper.find(word[i])==firstupper.end()){
                firstupper[word[i]]=i;
                }
            }
        }
         for(char c='a'; c<='z'; c++){
            char up = toupper(c);
            if(lastlower.find(c)!=lastlower.end() &&
               firstupper.find(up)!=firstupper.end()){
                if(lastlower[c] < firstupper[up]){
                    ans++;
                }
            }
        }
        return ans;
        
    }
};