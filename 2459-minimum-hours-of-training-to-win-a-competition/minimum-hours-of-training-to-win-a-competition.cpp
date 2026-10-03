class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience){
        int ans=0;
        int totalenergy=0;
        for(int i=0;i<energy.size();i++){
            totalenergy+=energy[i];
        }
        
        
        for(int i=0;i<experience.size();i++){
            if(experience[i]>=initialExperience){
                ans+=(experience[i]-initialExperience+1);
                initialExperience+=experience[i]-initialExperience+1;
            }
            initialExperience+=experience[i];
        }
    if(initialEnergy<=totalenergy){
        ans+=totalenergy-initialEnergy+1;
    }
        
        return ans; 
        
    }
};