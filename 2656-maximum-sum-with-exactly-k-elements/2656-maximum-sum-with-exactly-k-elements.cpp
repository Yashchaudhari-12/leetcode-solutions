class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {

        int largest = *max_element(nums.begin(),nums.end());
        int sum = 0;

        while(k--){
            sum += largest;
            largest++;
        }
        return sum;
        
    }
};