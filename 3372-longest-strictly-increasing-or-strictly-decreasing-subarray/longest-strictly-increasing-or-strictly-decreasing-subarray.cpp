class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums){
        if(nums.size()==0)return 0;
        int max_len=1;
        int ans1=1;
        int ans2=1;

        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                ans1++;
                ans2=1;
            }
            else if(nums[i]<nums[i-1]){
                ans2++;
                ans1=1;
            }
            else{//equal jb honge
                ans1=1;
                ans2=1;
            }
            max_len=max({max_len,ans1,ans2});

          
                 
        }
        return max_len;
        
    }
};