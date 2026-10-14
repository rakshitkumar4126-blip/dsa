class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        //if the sum is greater then max possible sum
        if(sum>9*num){
            return ""; 
        }
        string ans="";
        int nines=sum/9;
        int remainder=sum%9;
        for(int i=0;i<nines;i++){
            ans+='9';
        }
        //append the remainder digit if its greater than 0;
        if(remainder>0){
            ans+=to_string(remainder);

        }
        while(ans.length()<num){
            ans+='0';
        }
        return ans;
        
        
    }
};