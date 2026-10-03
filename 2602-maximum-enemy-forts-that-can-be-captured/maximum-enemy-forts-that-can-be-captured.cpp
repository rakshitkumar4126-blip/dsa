class Solution {
public:
    int captureForts(vector<int>& forts){
        int n=forts.size();
        int maxans=0;
        int prev=-1;
        for(int i=0;i<n;i++){
            if(forts[i]!=0){
                if(prev!=-1 && forts[i]!=forts[prev]){
                    maxans=max(maxans,i-prev-1);
                }
                prev=i;
            }
            
        }
        return maxans;
    }
};