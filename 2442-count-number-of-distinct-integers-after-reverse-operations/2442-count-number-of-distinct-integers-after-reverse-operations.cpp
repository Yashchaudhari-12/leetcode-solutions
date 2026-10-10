class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {

        int n = nums.size();
        
        for(int i=0;i<n;i++){
            int a = nums[i];
            int rev = 0;

            while(a != 0){
                int digit = a%10;
                rev = rev*10 + digit;
                a /= 10;
            }
            nums.push_back(rev);
        }
        set<int> ans(nums.begin(),nums.end());
        return ans.size();
    }
};