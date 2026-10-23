class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        int n = nums.size();
        auto it = max_element(nums.begin(),nums.end());
        int largest = *it;
        int index = it - nums.begin();
        int count = 0;

        for(int i=0;i<n;i++){
            if(largest >= 2*nums[i]){
                count++;
            }
        }

        if(count == n-1){
            return index;
        }
        return -1;
        
    }
};