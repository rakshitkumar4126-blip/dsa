class Solution {
public:
    long long removeZeros(long long n){
        string ans=to_string(n);
        string ans1="";
        for(int i=0;i<ans.length();i++){
            if(ans[i]!='0'){
                ans1+=ans[i];
            }

        }
        long long ans2=stoll(ans1);
        return ans2;

        
    }
};