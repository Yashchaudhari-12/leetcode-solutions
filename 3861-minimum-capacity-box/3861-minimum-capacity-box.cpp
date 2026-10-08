class Solution {
public:
    int minimumIndex(vector<int>& nums, int itemSize) {

        int n = nums.size();
        int min_cap = INT_MAX;
        int idx = -1;

        for(int i=0;i<n;i++){
            if(nums[i] >= itemSize){
                if(nums[i] < min_cap){
                    min_cap = nums[i];
                    idx = i;
                }
            }
        }
        return idx;
        
    }
};