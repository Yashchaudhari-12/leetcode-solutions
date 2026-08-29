class Solution {
public:
    int findMin(vector<int>& nums) {

        int n = nums.size();
        int ans = INT_MAX;
        int low = 0,high = n-1;

        while(low <= high){
            int mid = (low + high)/2;

            if(nums[mid] >= nums[low]){
                ans = min(nums[low],ans);
                low = mid + 1;
            }
            else{
                ans = min(nums[mid],ans);
                high = mid - 1;
            }
        }
        return ans;
    }
};