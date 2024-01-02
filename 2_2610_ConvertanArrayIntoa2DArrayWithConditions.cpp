class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
         
        unordered_map<int,int>mp;
        int maxi=0;

        for(auto i:nums){
            mp[i]++;
        }
        for(auto x:mp){
            maxi=max(maxi,x.second);
        }

        vector<vector<int>>result;

        for(int i=0;i<maxi;i++){
            
            vector<int>temp;

            for(auto& x:mp){
                if(x.second>0) {
                    temp.push_back(x.first);
                    x.second--;
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};