class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {

        unordered_map<int,vector<int>> mp;
        int n = nums.size();
        int cnt = 0;

        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }

        for(auto it : mp){
            vector<int> temp = it.second;
            if(temp.size() == 3 && (temp[1] - temp[0]) == (temp[2] - temp[1])){
                cnt++;
            }
        }

        return cnt;
        
    }
};