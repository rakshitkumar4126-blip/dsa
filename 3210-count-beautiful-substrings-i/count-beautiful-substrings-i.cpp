class Solution {
public:
    int beautifulSubstrings(string s, int k){
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++){
            int countv=0;
            int countc=0;
            for(int j=i;j<n;j++){
               
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                    countv++;
                }
                else{
                    countc++;
                }
                 if(countc>0 && countc==countv && (countc*countv)%k==0){
                ans++;
            }
            }
           
}
        return ans;
        
    }
};