class Solution {
public:
    int smallestIndex(vector<int>& nums) {

        int n = nums.size();

        for(int i=0;i<n;i++){
            int a = nums[i];
            int sum = 0;
            while(a != 0){
                int digit = a % 10;
                sum += digit;
                a = a/10;
            }
            if(sum == i){
                return i;
            }
        }
        return -1;
        
    }
};