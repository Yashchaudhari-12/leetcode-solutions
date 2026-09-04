class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size();
        int j = 0;

        for(int i=0;i<n;i++)
        {
            auto largest = max_element(nums.begin(),nums.begin()+i+1);
            auto smallest = min_element(nums.begin()+i,nums.end());
            if(*largest - *smallest <= k){
                return i;
            }
        }
        return -1;
    }
};