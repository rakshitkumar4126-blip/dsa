class Solution {
public:
string reverseWords(string s){
    int count=0;
    int n=s.length();
    int i=0;
    while(i<n && s[i]!=' '){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }
        i++;
    }
   
    
    int j=i+1;
    while(j<n){
        int start=j;
        int countemp=0;
        while(j<n && s[j]!=' '){
        if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
            countemp++;
        }
        j++;
        }
        if(countemp==count){
            reverse(s.begin()+start,s.begin()+j);
           
           
        }
        
        j++;

    }
    
    
    return s;
   }
};