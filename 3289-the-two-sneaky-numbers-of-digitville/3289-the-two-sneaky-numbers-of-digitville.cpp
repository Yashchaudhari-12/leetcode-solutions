class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int,int> mp;
        vector<int> ans;

        for(int x : nums){
            mp[x]++;
        }

        for(auto x : mp){
            if(x.second == 2){
                ans.push_back(x.first);
            }
        }
        return ans;
        
    }
};