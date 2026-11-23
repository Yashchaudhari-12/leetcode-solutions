class Solution {
public:
    int countMatches(vector<vector<string>>& nums, string ruleKey, string ruleValue) {

        int n = nums.size();
        int m = nums[0].size();
        int cnt = 0;

        for(int i=0;i<n;i++){
            if(ruleKey == "type"){
                if(nums[i][0] == ruleValue){
                    cnt++;
                }
            }
            else if(ruleKey == "color"){
                if(nums[i][1] == ruleValue){
                    cnt++;
                }
            }
            else{
                if(nums[i][2] == ruleValue){
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};