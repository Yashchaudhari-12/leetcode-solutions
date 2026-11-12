class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int j = n-1;
        int cnt = 0;
        int i=0;

        while(i < j){
            if(nums[i] ==  0 && nums[j] != 0){
                swap(nums[i],nums[j]);
                cnt++;
                i++;
                j--;
            }
            else if(nums[i] != 0){
                i++;
            }
            else{
                j--;
            }
        }
        return cnt;
        
    }
};