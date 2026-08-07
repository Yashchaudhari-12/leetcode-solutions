class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());
        vector <int> ans;
        int n = nums.size();

        for(int i = n-1;i >= 0 && ans.size() < k ;i--){
            if(i == n-1 || nums[i] != nums[i+1]){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};