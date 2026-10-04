class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k){
        int n=nums.size();
        
        int ans=0;
        for(int i=0;i<n;i++){
            int curr_lcm=nums[i];
            for(int j=i;j<n;j++){
                curr_lcm=lcm(curr_lcm,nums[j]);
                if(curr_lcm==k){
                    ans++;
                }
                if(curr_lcm>k || k%curr_lcm!=0){
                    break;
                }
                
            }

        }
        return ans;
        
    }
};