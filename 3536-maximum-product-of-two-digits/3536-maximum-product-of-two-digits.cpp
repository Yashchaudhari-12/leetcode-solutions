class Solution {
public:
    int maxProduct(int n) {

        vector<int> nums;
        int max_prod = INT_MIN;

        while(n != 0){
            int digit = n % 10;
            nums.push_back(digit);
            n = n/10;
        }

        for(int i=0;i<nums.size();i++){
            int curr_prod = 1;
            for(int j = i+1;j<=nums.size()-1;j++){
                curr_prod = nums[i] * nums[j];

                max_prod = max(curr_prod,max_prod);
                curr_prod = 1;
            }
        }
        return max_prod;


        
    }
};