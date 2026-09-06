class Solution {
public:
    vector<int> findArray(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans;
        ans.push_back(nums[0]);
        int curr_xor = 0;

        for(int i=0;i<n-1;i++){
            curr_xor = nums[i] ^ nums[i+1];
            ans.push_back(curr_xor);
        }
        return ans;
        
    }
};