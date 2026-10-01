class Solution {
public:
    int elevatorRequests(int n, vector<int>& nums) {

        int m = nums.size();
        int sum = nums[0];

        for(int i=1;i<m;i++){
            sum += abs(nums[i-1] - nums[i]);
        }
        return sum;

        
    }
};