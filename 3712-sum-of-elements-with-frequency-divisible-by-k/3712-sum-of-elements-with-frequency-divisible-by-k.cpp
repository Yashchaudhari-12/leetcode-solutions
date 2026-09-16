class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {

        int n = nums.size();
        unordered_map<int,int> mp;
        int sum = 0;

        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto it : mp){
            if(it.second % k == 0){
                int t_sum = it.first * it.second;
                sum += t_sum;
            }
        }
        return sum;
        
    }
};