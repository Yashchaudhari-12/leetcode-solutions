class Solution {
public:
    vector<int> finalPrices(vector<int>& nums) {

        int n = nums.size();
        int j = 1;
        vector<int> ans;

        for(int i=0;i<n;i++){
            bool flag = true;
            for(int j=i+1;j<n;j++){
                int disc = nums[i] - nums[j];

                if(disc >= 0){
                    ans.push_back(disc);
                    flag = false;
                    break;
                }
                else{
                    flag = true;
                }
            }
            if(flag == true){
                ans.push_back(nums[i]);
            }
        }
        return ans;
        
    }
};