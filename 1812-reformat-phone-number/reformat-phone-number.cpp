class Solution {
public:
    string reformatNumber(string number){
        string ans="";
        string phone="";
        int n=number.length();
        int count=0;
        for(int i=0;i<n;i++){
            if(number[i]!=' ' && number[i]!='-'){
                phone+=number[i];
                count++;
            }
        }
        int i=0;
        while(count>0){
            if(count>4){
                ans+=phone.substr(i,3);
                ans+='-';
                i+=3;
                count-=3;
            }
            else if(count==3){
                ans+=phone.substr(i,3);
                ans+='-';
                i+=3;
                count-=3;
                }
                else{
                    ans+=phone.substr(i,2);
                ans+='-';
                i+=2;
                count-=2;
                }

        }
        int a=ans.length();
        return ans.substr(0,a-1);
    }
};