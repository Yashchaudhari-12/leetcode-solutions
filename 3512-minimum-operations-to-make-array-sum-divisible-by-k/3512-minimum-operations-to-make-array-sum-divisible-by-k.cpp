class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        int sum = accumulate(nums.begin(),nums.end(),0);
        int cnt = 0;

        while(sum % k != 0){
            sum = sum - 1;
            cnt++;
        }
        return cnt;
    }
};