class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {

        int n = nums.size();
        unordered_set<int> ans(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            int a = nums[i];
            int rev = 0;

            while(a != 0){
                int digit = a%10;
                rev = rev*10 + digit;
                a /= 10;
            }
            ans.insert(rev);
        }
        
        return ans.size();
    }
};