class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        int diff = INT_MAX;

        for(int i=0;i<n-1;i++){
            if(abs(nums[i] - nums[i+1]) < diff){
                diff = abs(nums[i] - nums[i+1]);
            }
        }

        for(int i=0;i<n-1;i++){
            if(abs(nums[i] - nums[i+1]) == diff){
                vector<int> temp = {nums[i],nums[i+1]};
                ans.push_back(temp);
            }
        }
        return ans;
        
    }
};