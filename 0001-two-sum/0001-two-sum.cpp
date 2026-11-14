class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

       unordered_map<int ,int >mp;

       for(int i=0;i<nums.size();i++)
       {
            int required_sum = target - nums[i];

            if(mp.find(required_sum) != mp.end())
            {
                return {mp[required_sum],i};
            }
            else
            {
                mp[nums[i]] = i;
            }
       }
       return {};
    }
};