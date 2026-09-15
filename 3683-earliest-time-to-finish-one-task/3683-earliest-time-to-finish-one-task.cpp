class Solution {
public:
    int earliestTime(vector<vector<int>>& nums) {

        int n = nums.size();
        int earliest_t = INT_MAX;

        for(int i=0;i<n;i++){
            int sum = nums[i][0] + nums[i][1];

            earliest_t = min(earliest_t,sum);
        }
        return earliest_t;
        
    }
};