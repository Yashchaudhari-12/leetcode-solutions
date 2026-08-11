class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int n = nums.size();
        long long prefix_sum = nums[0],j=1;

        for(int i=0;i<n && j<=n-1;i++){
            if(nums[j] == nums[j-1] + 1){
                prefix_sum += nums[j];
                j++;
            }
        }
        sort(nums.begin(),nums.end());
        for(int j=0;j<n;j++){
            if(prefix_sum == nums[j]){
                prefix_sum++;
            }
        }
        return prefix_sum;
        
    }
};