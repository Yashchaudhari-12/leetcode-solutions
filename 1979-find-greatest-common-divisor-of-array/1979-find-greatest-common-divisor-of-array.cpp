class Solution {
public:
    int findGCD(vector<int>& nums) {

        int GCD = 0;
        int smallest = INT_MAX;
        int largest = INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            smallest = min(smallest,nums[i]);
            largest = max(largest,nums[i]);
        }
        GCD = gcd(smallest,largest);
        return GCD;
    }
};