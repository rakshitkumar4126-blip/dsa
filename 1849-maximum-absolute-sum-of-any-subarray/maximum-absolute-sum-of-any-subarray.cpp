class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums){
        int currsum=0;
        int maxsum=INT_MIN;
        int maxsum2=INT_MAX;
        int currsum2=0;
        for(int x:nums){
            currsum+=x;
            if(currsum<0){
                currsum=0;
            }
            maxsum=max(currsum,maxsum);
        }
    for(int x:nums){
        currsum2+=x;
        if(currsum2>0){
            currsum2=0;
        }
        maxsum2=min(currsum2,maxsum2);
    }
        return max(abs(maxsum),abs(maxsum2));
        }
};