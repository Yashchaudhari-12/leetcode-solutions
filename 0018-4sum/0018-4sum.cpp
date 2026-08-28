class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        for(long long i=0;i<n;i++){
            if(i>0 && nums[i-1] == nums[i])continue;
            for(long long j=i+1;j<n;j++){
                if(j > i+1 && nums[j-1] == nums[j])continue;

                long long k = j+1;
                long long l = n-1;

                while(k < l){
                    long long sum = 1LL * nums[i] + nums[j] + nums[k] + nums[l];
                    if(sum < target){
                        k++;
                    }
                    else if(sum > target){
                        l--;
                    }
                    else{
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while(k < l && nums[k-1] == nums[k])k++;
                        while(k < l && nums[l] == nums[l+1])l--;
                    }
                }
            }
        }
        return ans;
    }
};