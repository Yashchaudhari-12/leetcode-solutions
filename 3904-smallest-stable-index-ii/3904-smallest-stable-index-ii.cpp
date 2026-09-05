class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int> pref_max(n);
        vector<int> suffix_min(n);
        pref_max[0] = nums[0];
        suffix_min[n-1] =  nums[n-1] ;

        for(int i=1;i<n;i++){
            pref_max[i] = max(pref_max[i-1],nums[i]);
        }
        for(int i = n-2;i>=0;i--){
            suffix_min[i] = min(suffix_min[i+1],nums[i]);
        }

        for(int i=0;i<n;i++){
            if(pref_max[i] - suffix_min[i] <= k){
                return i;
            }
        }
        return -1;
    }
};