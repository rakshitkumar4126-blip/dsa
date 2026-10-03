class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0;
        long long sum2=0;
        long long count1=0;
        long long count2=0;

        for(int i=0;i<nums1.size();i++){
            if(nums1[i]==0){
                count1++;
            }
            sum1+=nums1[i];
        }
        for(int i=0;i<nums2.size();i++){
            if(nums2[i]==0){
                count2++;
            }
            sum2+=nums2[i];
        }
        long long minsum1=sum1+count1;
        long long minsum2=sum2+count2;
        if(minsum1<minsum2 && count1==0){
            return -1;
        }
        if(minsum2<minsum1 && count2==0){
            return -1;
        }
    return max(minsum1,minsum2);
        
    }
};