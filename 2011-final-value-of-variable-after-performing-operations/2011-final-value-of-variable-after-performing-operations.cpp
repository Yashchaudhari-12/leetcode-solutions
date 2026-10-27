class Solution {
public:
    int finalValueAfterOperations(vector<string>& nums) {

        int x = 0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i] == "--X" || nums[i] == "X--"){
                x--;
            }
            else{
                x++;
            }
        }
        return x;
        
    }
};