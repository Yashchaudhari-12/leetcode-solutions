class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {

        int n = nums.size();
        long long largest = LLONG_MIN;
        long long smallest = LLONG_MAX;
        long long second_largest = LLONG_MIN;

        for(int i=0;i<n;i++)
        {
            if(nums[i] < smallest)
            {
                smallest = nums[i];
            }
            if(nums[i] >= largest)
            {
                second_largest = largest;
                largest = nums[i];
            }
            else if(nums[i] > second_largest)
            {
                second_largest = nums[i];
            }
        } 
        return largest + second_largest - smallest;      
    }
};