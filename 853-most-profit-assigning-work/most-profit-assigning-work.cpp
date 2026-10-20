class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int ans1=0;
        vector<pair<int,int>> ans;
        for(int i=0;i<profit.size();i++){
            ans.push_back({difficulty[i],profit[i]});
        }
        sort(ans.begin(),ans.end());
        //updating acc to maximum profit available upto now
        for(int i=1;i<ans.size();i++){
            ans[i].second=max(ans[i].second,ans[i-1].second);
        }
        for(int i=0;i<worker.size();i++){
            int st=0;
            int end=difficulty.size()-1;
            int b=-1;
            while(st<=end){
                int mid=st+(end-st)/2;
                
                if(ans[mid].first<=worker[i]){
                    st=mid+1;
                    b=mid;
                }
                else{
                    end=mid-1;
                }



            }
            if(b!=-1){
            ans1+=ans[b].second;
            }
        }
return ans1;
        
    }
};