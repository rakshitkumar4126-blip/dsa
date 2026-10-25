class Solution {
public:
    bool isItPossible(string word1, string word2){
        vector<int> arr1(26,0);
        vector<int> arr2(26,0);
        int a=word1.length();
        int b=word2.length();
        for(int i=0;i<a;i++){
            arr1[word1[i]-'a']++;
        }
        for(int j=0;j<b;j++){
            arr2[word2[j]-'a']++;
        }
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                if(arr1[i]==0 || arr2[j]==0) continue;
                arr1[i]--;
                arr1[j]++;
                arr2[i]++;
                arr2[j]--;
                int x=0;
                int y=0;
                for(int k=0;k<26;k++){
                    if(arr1[k]>0){
                        x++;
                    }
                    if(arr2[k]>0){
                        y++;
                    }
                }
                if(x==y){
                    return true;
                }
                arr1[i]++;
                arr1[j]--;
                arr2[i]--;
                arr2[j]++;

            }
        }
        return false;
        
    }
};