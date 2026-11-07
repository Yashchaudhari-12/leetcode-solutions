class Solution {
public:
    int minSetSize(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        int half = n/2;
        vector<int> temp;

        for(auto it : mp){
            temp.push_back(it.second);
        }
        sort(temp.begin(),temp.end(),greater<int>());

        int cnt = 0,size = 0;

        for(int i=0;i<temp.size();i++){
            size += temp[i];
            cnt++;

            if(size >= half){
                return cnt;
            }
        }
        return -1;
    }
};