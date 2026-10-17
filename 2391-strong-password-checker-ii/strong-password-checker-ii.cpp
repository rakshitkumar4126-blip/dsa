class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        string sp="!@#$%^&*()-+";
        if(password.size()<8){
            return false;
        }
        bool sp1=false;
        bool dig=false;
        bool uppercase=false;
        bool lowercase=false;
        for(int i=0;i<password.size()-1;i++){
            if(password[i]==password[i+1]){
                return false;
            }
        }
        for(int i=0;i<password.size();i++){
            
            if(password[i]<='Z' && password[i]>='A'){
                uppercase=true;
            }
            else if(password[i]<='z' && password[i]>='a'){
                lowercase=true;
            }
            else if(password[i]<='9' && password[i]>='0'){
                dig=true;
            }
            else {
                if(sp.find(password[i])!=std::string::npos){
                    sp1=true;
                }
            }

        }
        return sp1 && dig && uppercase && lowercase; 
    }
};