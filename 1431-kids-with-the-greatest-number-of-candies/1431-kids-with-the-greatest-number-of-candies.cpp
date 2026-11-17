class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int extraCandies) {
        int n = nums.size();
        vector<bool> result;

        for(int i=0;i<n;i++){
            if((nums[i]+extraCandies) >= *max_element(nums.begin(),nums.end())){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};