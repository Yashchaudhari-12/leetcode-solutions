class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();
        int k = 1;
        int j = 1;
        int max_prod = INT_MIN;

        for(int i = 0;i<=n-1;i++)
        {
            if(k == 0){
                k = 1;
            }
            if(j == 0){
                j = 1;
            }

            k = k * nums[i];
            j = j * nums[n-i-1];

            max_prod = max(max_prod,max(k,j));
        }  
        return max_prod;      
    }
};