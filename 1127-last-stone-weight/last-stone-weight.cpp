class Solution {
public:
    int lastStoneWeight(vector<int>& stones){
        priority_queue<int> p;
        int n=stones.size();
        for(int i=0;i<n;i++){
            p.push(stones[i]);
        }
      while(p.size()>1){
        int y=p.top();
        p.pop();
        int x=p.top();
        p.pop();
        if(x!=y){
            p.push(y-x);
        }
      } 
      if(p.size()!=0) return p.top(); 
      else return 0;
        
    }
};