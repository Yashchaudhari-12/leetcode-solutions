class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        int n  = nums.size();
        int even = 0,odd = n-1;

        while(even <= odd){
            if(nums[even] % 2 != 0 && nums[odd] % 2 == 0){
                swap(nums[even],nums[odd]);
                even++;
                odd--;
            }
            else if(nums[even] % 2 == 0){
                even++;
            }
            else{
                odd--;
            }
        }
        return nums;

        
        
    }
};