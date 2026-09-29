class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words){
        unordered_set<string> s;
        
        int m=words[0].length();
        int n=words.size();
        for(int i=0;i<n;i++){
            string odd="";
            string even="";
            for(int j=0;j<m;j++){
                if(j%2==0){
                    even+=words[i][j];

                }
                else{
                    odd+=words[i][j];
                }


            }
            sort(even.begin(),even.end());
            sort(odd.begin(),odd.end());
            s.insert(even+odd);



        }
        return s.size();




        
    }
};