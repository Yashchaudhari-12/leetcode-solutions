class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int n = nums.size();
        int sum = 0;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto it : mp){
            if(it.second == 1){
                sum += it.first;
            }
        }
        return sum;
    }
};