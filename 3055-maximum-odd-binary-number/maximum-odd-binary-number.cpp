class Solution {
public:
    string maximumOddBinaryNumber(string s){
        
        int count1=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                count1++;
            }
        }
        int count0=s.length()-count1;

        
        return string(count1-1,'1')+string(count0,'0')+'1';
    }
};