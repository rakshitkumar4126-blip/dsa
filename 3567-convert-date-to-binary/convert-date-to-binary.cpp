class Solution {
public:
long long bin(int n){
    long long ans=0;
    long long pow=1;
    while(n>0){
        int rem=n%2;
        if(rem==1){
            ans+=rem*pow;
        }
        pow*=10;
        n/=2;
        
    }
    return ans;
}
    string convertDateToBinary(string date){
        string ans="";
        int n=date.length();
        string substr="";
        for(int i=0;i<n;i++){
            
            if(date[i]!='-'){
                substr+=date[i];
            }
            else{
                ans+=to_string(bin(stoi(substr)))+'-';
                substr="";
            }

        }
         ans+=to_string(bin(stoi(substr)));
        return ans;
    }
};