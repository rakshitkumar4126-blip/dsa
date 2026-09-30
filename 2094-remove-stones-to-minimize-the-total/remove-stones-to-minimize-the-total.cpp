class Solution {
public:
    int minStoneSum(vector<int>& piles, int k){
        int ans=0;
        priority_queue<int> q(piles.begin(),piles.end());
        for(int i=0;i<k;i++){
            int currelem=q.top();
            q.pop();
            currelem-=floor(currelem/2);
            q.push(currelem);
            
        }
        while(!q.size()==0){
            ans+=q.top();
            q.pop();
        }
        return ans;
        
    }
};