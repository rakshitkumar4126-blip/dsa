class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity){
        int full=capacity;
        int ans=0;
        int n=plants.size();
        for(int i=0;i<n;i++){
            if(plants[i]<=capacity){
                ans++;
                capacity-=plants[i];
            }
            else{
                ans+=(2*i+1);
                 capacity=full;

                capacity-=plants[i];
            }
        }
        return ans;
        
    }
};