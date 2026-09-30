class Solution {
public:
    int minOperations(vector<int>& nums, int k){
        int ans=0;
        priority_queue<long long,vector<long long>,greater<long long>>q;//min priority queue
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
        }
        while(q.top()<k){
            long long x=q.top();
            q.pop();
            long long y=q.top();
            q.pop();
            long long ins=((min(x, y) * 2 + max(x, y)));
            q.push(ins);
            ans++;


        }
        return ans;
        }
};