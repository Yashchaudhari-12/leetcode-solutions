class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        vector<int> leftsum,rightsum;
        leftsum.push_back(0);
        int n = nums.size();

        for(int i=0;i<n;i++){
            int right_sum = 0;
            for(int j=i+1;j<n;j++){
                right_sum += nums[j];
            }
            rightsum.push_back(right_sum);
        }
        rightsum.push_back(0);

        for(int i = 1;i<n;i++){
            int left_sum = 0;
            for(int j = 0;j<i;j++){
                left_sum += nums[j];
            }
            leftsum.push_back(left_sum);
        }

        vector<int> ans;

        for(int i=0;i<n;i++){
            ans.push_back(abs(leftsum[i] - rightsum[i]));
        }
        return ans;
        
    }
};