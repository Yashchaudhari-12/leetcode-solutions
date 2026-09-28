class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {

        unordered_map<int,int> mp;
        unordered_set<int> st;
        int n = nums.size();

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto it : mp){
            int freq = it.second;

            if(st.count(freq)){
                return false;
            }

            st.insert(freq);
        }
        return true;
        
    }
};