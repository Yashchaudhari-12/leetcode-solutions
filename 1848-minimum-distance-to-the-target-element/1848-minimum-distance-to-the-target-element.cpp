class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {

        int n = nums.size();
        int min_elem = INT_MAX;

        for(int i=0;i<n;i++){
            if(nums[i] == target){
                min_elem = min(abs(i - start),min_elem);
            }
        }
        return min_elem;
    }
};