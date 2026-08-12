class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();
        int cnt1 = 0,cnt2 = 0;
        int candidate1,candidate2;
        vector<int> ans;

        for(int num : nums){
            if(cnt1 == 0 && candidate2 != num){
                cnt1 = 1;
                candidate1 = num;
            }
            else if(cnt2 == 0 && candidate1 != num){
                cnt2 = 1;
                candidate2 = num;
            }
            else if(candidate1 == num){
                cnt1++;
            }
            else if(candidate2 == num){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0,cnt2 = 0;

        for(int i=0;i<n;i++){
            if(candidate1 == nums[i]){
                cnt1++;
            }
            else if(candidate2 == nums[i]){
                cnt2++;
            }
        }
        if(cnt1 > n/3){
            ans.push_back(candidate1);
        }
        if(cnt2 > n/3){
            ans.push_back(candidate2);
        }
        return ans;
        
    }
};