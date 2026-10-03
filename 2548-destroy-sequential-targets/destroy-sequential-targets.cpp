class Solution {
public:
    int destroyTargets(vector<int>& nums, int space){
        unordered_map<int,int> count;
        
        int maxtargets=0;
        for(int num : nums){
            int rem=num%space;
            count[rem]++;
            maxtargets=max(maxtargets,count[rem]);
        }
        int ans=INT_MAX;
        for(int num : nums){
            if(count[num%space]==maxtargets){
                ans=min(ans,num);
            }
        }

        
        
return ans;
        
    }
};