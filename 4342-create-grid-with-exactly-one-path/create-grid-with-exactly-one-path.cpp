class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        string ans1="";
        for(int i=0;i<n;i++){
            ans1.push_back('.');
        }
        string ans2="";
        for(int i=0;i<n-1;i++){
            ans2.push_back('#');
        }
        ans2.push_back('.');
      ans.push_back(ans1);
      for(int i=1;i<m;i++){
        ans.push_back(ans2);
      }
      return ans;
      
    }
};