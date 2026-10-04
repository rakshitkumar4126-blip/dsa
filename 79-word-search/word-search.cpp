class Solution {
public:
bool helper(vector<vector<char>>& board,string &word,int row,int col,int idx,vector<vector<bool>>& vis,int n,int m){
    if(idx==word.length()){
        return true;
    }
    if(row<0 ||row>=n ||col<0 || col>=m || vis[row][col]==true || board[row][col]!=word[idx]){
        return false;
    }
    
    vis[row][col]=true;
    bool found=helper(board,word,row,col+1,idx+1,vis,n,m) ||
            helper(board,word,row+1,col,idx+1,vis,n,m) ||
            helper(board,word,row-1,col,idx+1,vis,n,m) ||
            helper(board,word,row,col-1,idx+1,vis,n,m);
        
        vis[row][col]=false;
    
    return found;



}
    bool exist(vector<vector<char>>& board, string word){
        int n=board.size();
        int m=board[0].size();
    
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                   if(helper(board,word,i,j,0,vis,n,m)){
                   return true;
                   }

                }
            }
        }
        return false;
        
    }
};