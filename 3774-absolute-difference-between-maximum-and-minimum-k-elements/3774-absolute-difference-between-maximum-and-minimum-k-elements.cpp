class Solution {
public:
    int absDifference(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());
        int n = nums.size();
        int j = n-1;
        int largest_sum = 0;
        int smallest_sum = 0;

        for(int i=0;i<k;i++){
            largest_sum += nums[j];
            smallest_sum += nums[i];
            j--;
        }
        return abs(largest_sum - smallest_sum);
        
    }
};