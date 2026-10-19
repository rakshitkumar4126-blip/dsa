class Solution {
public:
    int maximumLengthSubstring(string s){
        int ans=INT_MIN;
        for(int i=0;i<s.length();i++){
            vector<int> arr(26,0);
            int count=0;
            for(int j=i;j<s.length();j++){
                if(arr[s[j]-'a']<2){
                    arr[s[j]-'a']++;
                    count++;
                }
                else{
                    break;
                }
                
                 
                

            }
            ans=max(ans,count);
        }
        
        return ans;
        
    }
};