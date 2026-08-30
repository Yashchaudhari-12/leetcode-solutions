class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int ,vector<int>> mp;
        int cnt = 0;

        for(int i = 0;i<n;i++){
            mp[nums[i]].push_back(i);
        }  

        for(auto x : mp){
            vector<int>& index = x.second;

            if(index.back() - index.front() + 1 == index.size()){
                cnt++;
            }
        }
        return cnt;
    }
};