class Solution {
public:
    bool isValid(string s){
        if(s.length()%3!=0){
            return false;
        }
       string stack="";
       for(char ch:s){
        stack.push_back(ch);
        if(stack.length()>=3 && stack[stack.length()-3]=='a' &&
        stack[stack.length()-2]=='b' &&
        stack[stack.length()-1]=='c'){
            stack.pop_back();
            stack.pop_back();
            stack.pop_back();
            }
       }
       
        return stack.empty();
    }
};