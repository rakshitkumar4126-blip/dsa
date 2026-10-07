class Solution {
public:
bool ist(vector<vector<int>>& mat,int row,int col,int trow,int tcol){
    for(int i=0;i<trow;i++){
        if(mat[i][col]==1 && i!=row){
            return false;
        }
       }
     for(int j=0;j<tcol;j++){
        if(mat[row][j]==1 && j!=col){
            return false;
        }
     }  
    return true;


}

    int numSpecial(vector<vector<int>>& mat){
        int ans=0;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1 && ist(mat,i,j,n,m)){
                    ans++;
                }
            }
        }
        return ans;
    }
};