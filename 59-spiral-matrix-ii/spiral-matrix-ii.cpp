class Solution {
public:
    vector<vector<int>> generateMatrix(int n){
        vector<vector<int>> ans(n,vector<int>(n));
        int srow=0;
        int scol=0;
        int erow=n-1;
        int ecol=n-1;
        int count=1;
        while(srow<=erow && scol<=ecol){
            for(int i=scol;i<=ecol;i++){
                ans[srow][i]=count;
                count++;
            }
            srow++;
            for(int i=srow;i<=erow;i++){
                ans[i][ecol]=count;
                count++;
            }
            ecol--;
            for(int i=ecol;i>=scol;i--){
                ans[erow][i]=count;
                count++;
            }
            erow--;
            for(int i=erow;i>=srow;i--){
                ans[i][scol]=count;
                count++;
            }
            scol++;

        }
        return ans;
        
    }
};