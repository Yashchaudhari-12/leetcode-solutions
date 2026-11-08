class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {

        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;

        for(int x : nums){
            mp[x]++;
        }

        for(auto it : mp){
            int freq = min(it.second,k);

            while(freq--){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};