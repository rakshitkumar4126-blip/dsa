class Solution {
public:
    int minimumDeletions(vector<int>& nums){
        int ans=0;
        int maxval=INT_MIN;
        int minval=INT_MAX;
        int maxidx=0;
        int minidx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxval){
                maxval=nums[i];
                maxidx=i;
            }
            if(nums[i]<minval){
                minval=nums[i];
                minidx=i;
            }
            
        }
    //delete both from left    
    int c1=max(minidx,maxidx)+1;
    //delete both from right
    int c2=nums.size()-min(minidx,maxidx);
    //delete from both ends
    int c3=(min(minidx,maxidx)+1)+(nums.size()-max(minidx,maxidx));
    return min({c1,c2,c3});
}
};