class Solution {
public:
    vector<int> stableMountains(vector<int>& nums, int threshold) {

        int n = nums.size();
        vector<int> ans;

        for(int i=1;i<n;i++){
            if(nums[i-1] > threshold){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};