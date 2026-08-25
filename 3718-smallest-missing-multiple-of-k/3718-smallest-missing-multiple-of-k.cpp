class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        unordered_set<int> mp(nums.begin(),nums.end());
        int miss_no = 0,j = 1;

        while(true){

            int miss_no = k * j;

            if(mp.find(miss_no) == mp.end()){
                return miss_no;
            }
            j++;
        }
        return miss_no;
        
    }
};