class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k){
        long long ans=0;
        priority_queue<int> q;
        for(int i=0;i<gifts.size();i++){
            q.push(gifts[i]);
        }
        int i=0;
        while(i<k){
            for(int j=0;j<gifts.size();j++){
                if(gifts[j]==q.top()){
                    gifts[j]=floor(sqrt(q.top()));
                    q.pop();
                    q.push(gifts[j]);
                    i++;
                    break;
                    
                }
            }

        }


        for(int i=0;i<gifts.size();i++){
            ans+=gifts[i];
        }
        
   return ans;
        
    }
};