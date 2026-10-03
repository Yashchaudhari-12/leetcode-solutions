class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        unordered_map <int,int> mp;
        int n = nums.size();
        int freq = 0;
        int max_freq = 0;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            freq = max(freq,mp[nums[i]]);
        }

        for(auto it : mp){
            if(it.second == freq){
                max_freq += it.second;
            }
        }
        return max_freq;


        
    }
};